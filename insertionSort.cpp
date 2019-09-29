#include<iostream>
using namespace  std;

int main(){
	int n,a[1000];
	cin>>n;

	int i,j;
	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for ( i = 1; i < n; i++)
	{
		int temp=a[i];
		for ( j = i; j > 0 && temp< a[j-1]; j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}

	for ( i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}