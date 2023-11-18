#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> NearestSmallertoRight(vector<int> &inputs, int n)
{
    vector<int> ans;
    stack<int> s;
    
    for(int i=n-1; i>=0; i--)
    {
        int ele = inputs[i];
        
        if(s.empty())
        {
            ans.push_back(-1);
        }
        
        else
        {
            if(s.top() < ele)
            {
                ans.push_back(s.top());
            }
            
            else
            {
                while(!s.empty() && s.top() >= ele)
                {
                    s.pop();
                }
                
                if(s.empty())
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(s.top());
                }
            }
        }
        
        s.push(ele);
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> inputs(n);
    for(int i=0; i<n; i++)
    {
        cin>>inputs[i];
    }
    
    vector<int> result = NearestSmallertoRight(inputs, n);
    
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
