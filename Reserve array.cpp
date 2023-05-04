/*Reserve array*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void ReserveArray(int *a, int n)
{
    
    int start = 0, last = n-1;
    
    while(start <= last)
    {
        swap(a[start], a[last]);
        start++;
        last--;
    }
    
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
    
    ReserveArray(a, n);
    
    cout<<"The reverse array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
