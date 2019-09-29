#include<iostream>
using namespace  std;

int main(){
	int i,j,n,a[1000];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for (i = 0; i < n-1; i++)
	{
		for ( j = 0; j < (n-1-i); j++)
		{
			if (a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}

	for ( i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<endl;
	return 0;
}