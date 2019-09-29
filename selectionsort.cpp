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
		int minimum=i;
		for ( j = i+1; j < n; j++)
		{
			if (a[j]<a[minimum])
			{
				minimum=j;
			}
		}
		swap(a[i],a[minimum]);
	}

	for ( i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<endl;
	return 0;
}