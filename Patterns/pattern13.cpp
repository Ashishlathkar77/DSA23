/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i = 1, j, count = 0;
    char ch = 'A';
    
    while(i <= n)
    {
        j = 1;
        while(j <= n)
        {
            char flag = ch+count;
            cout<<flag<<" ";
            count++;
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
