#include <iostream>
#include <stack>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> NearestSmallerRight(vector<int> &heights, int n)
{
    vector<int> right;
    stack<pair<int, int>> s;
    
    for(int i=n-1; i>=0; i--)
    {
        while(!s.empty() && s.top().first >= heights[i])
        {
            s.pop();
        }
        
        if(s.empty())
        {
            right.push_back(n);
        }
        else
        {
            right.push_back(s.top().second);
        }
        
        s.push({heights[i], i});
    }
    
    reverse(right.begin(), right.end());
    return right;
}

vector<int> NearestSmallerLeft(vector<int> &heights, int n)
{
    vector<int> left;
    stack<pair<int, int>> s;
    
    for(int i=0; i<n; i++)
    {
        while(!s.empty() && s.top().first >= heights[i])
        {
            s.pop();
        }
        
        if(s.empty())
        {
            left.push_back(-1);
        }
        else
        {
            left.push_back(s.top().second);
        }
        
        s.push({heights[i], i});
    }
    
    return left;
}

int maxi_area_histogram(vector<int> &heights, int n)
{
    vector<int> right = NearestSmallerRight(heights, n);
    vector<int> left = NearestSmallerLeft(heights, n);
    
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int a = heights[i] * (right[i]-left[i]-1);
        maxi = max(maxi, a);
    }
    
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> heights(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>heights[i];
    }
    
    int area = maxi_area_histogram(heights, n);
    
    cout<<area;
    return 0;
}
