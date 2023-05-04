#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i = 1, j;
    
    while(i <= n)
    {
        j = 1;
        while(j <= i-1)
        {
            cout<<" ";
            j++;
        }
        
        while(j <= n)
        {
            cout<<j;
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
