#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	int i,j,n,k,a[1000];
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
			for ( k = j+1; k < n; k++)
			{
				if ((a[i]+a[j]+a[k]) == target )
				{
					cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
				}
			}
		}
	}

	cout<<endl;
	return 0;
}