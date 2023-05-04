#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i = 1, j, count = 1;
    
    while(i <= n)
    {
        j = 1;
        while(j <= n-i+1)
        {
            cout<<j;
            j++;
        }
        
        j = 1;
        while(j <= i-1)
        {
            cout<<"*";
            j++;
        }
        
        j = 1;
        while(j <= i-1)
        {
            cout<<"*";
            j++;
        }
        
        j = 1;
        int flag = n-i+1;
        while(j <= n-i+1)
        {
            cout<<flag;
            flag--;
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
