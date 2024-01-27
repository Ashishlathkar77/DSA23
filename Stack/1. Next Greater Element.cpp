#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> findNextGreaterElement(const vector<int>& input) {
    int n = input.size();
    vector<int> ans;
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        int ele = input[i];
        if (st.empty()) {
            ans.push_back(-1);
        } else {
            if (st.top() > ele) {
                ans.push_back(st.top());
            } else {
                while (!st.empty() && st.top() <= ele) {
                    st.pop();
                }
                if (st.empty()) {
                    ans.push_back(-1);
                } else {
                    ans.push_back(st.top());
                }
            }
        }
        st.push(ele);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    vector<int> result = findNextGreaterElement(input);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
