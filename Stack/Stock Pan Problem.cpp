#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> StockPanProblem(vector<int> &input, int n)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    
    for(int i=0; i<n; i++)
    {
        int ele = input[i];
        
        while(!s.empty() && s.top().first < ele)
        {
            s.pop();
        }
        
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(s.top().second);
        }
        
        s.push({ele, i});
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> input(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    
    vector<int> result = StockPanProblem(input, n);
    
    for(int i=0; i<n; i++)
    {
        cout<<i-result[i]<<" ";
    }

    return 0;
}
