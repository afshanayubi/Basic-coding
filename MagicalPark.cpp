#include <iostream>
using namespace  std;

int main(){
	int n,m,k,s;
	cin>>n>>m>>k>>s;

	char a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin>>a[i][j];
		}
	}

	int strength=s;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j]=='.' && j==m-1)
			{
				strength=strength-2;
			}
			else if (a[i][j]=='.' && j<m-1)
			{
				strength=strength-3;
			}
			else if (a[i][j]=='*' && j==m-1)
			{
				strength=strength+5;
			}
			else if (a[i][j]=='*' && j<m-1)
			{
				strength=strength+4;
			}
			else if (a[i][j]=='#')
			{
				break;
			}
		}
	}

	if (strength>=k)
	{
		cout<<"Yes"<<endl;
		cout<<strength<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}

	return 0;
}