#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i = 1, j, flag;

	while(i <= n)
	{
		flag = i;
		j = 1;
		while(j <= i)
		{
			cout<<flag<<" ";
			flag++;
			j++;
		}

		cout<<endl;
		i++;
	}

	return 0;
}