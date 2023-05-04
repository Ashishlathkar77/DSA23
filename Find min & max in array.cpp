/*Find max and min in array*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maximum(int *a, int n)
{
    int max = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    
    return max;
}

int minimum(int *a, int n)
{
    int min = INT_MAX;
    
    for(int i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    
    return min;
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"maximum is "<<maximum(a, n)<<endl;
    cout<<"minimum is "<<minimum(a, n)<<endl;

    return 0;
}
