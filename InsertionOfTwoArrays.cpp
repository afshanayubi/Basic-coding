#include <iostream>
using namespace std;

int main(){
	int i,j,n,a[10000],b[10000];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for ( j = 0; j < n; j++)
	{
		cin>>b[j];
	}

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; i < n; j++)
		{
			if (a[i] == b[j])
			{
				break;
			}
			cout<<a[i]<<",";
		}

	}

	cout<<endl;
	return 0;
}