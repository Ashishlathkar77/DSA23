#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i = 1, j;
    char ch = 'A';
    
    while(i <= n)
    {
        j = 1;
        while(j <= n)
        {
            ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
