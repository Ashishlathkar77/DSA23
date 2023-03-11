#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i = 1, j;
	char ch = 'A';

	while(i <= n);
	{
		j = 1;
		while(j <= n)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}

		cout<<endl;
		i++;
	}
	
	return 0;
}