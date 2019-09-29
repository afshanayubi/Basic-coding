#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	int i,j,n,a[1000];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	int target;
	cin>>target;

	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j < n; j++)
		{
			if ((a[i]+a[j]) == target)
			{
				cout<<a[i]<<" and "<<a[j]<<endl;
			}
		}
	}

	cout<<endl;
	return 0;
}