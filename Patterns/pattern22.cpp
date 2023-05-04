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
        while(j <= n-i)
        {
            cout<<"  ";
            j++;
        }
        
        j = 1;
        while(j <= i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
