#include<iostream>
#include <climits>
using namespace  std;
int main(){
	int n,a[1000],i;
	cin>>n;

	for (i = 0; i <n; i++)
	{
		cin>>a[i];
	}

    int large=INT_MIN;
	for (i = 0; i < n; i++)
	{
		if (a[i]>large)
		{
			large=a[i];
		}
	}
	cout<<large<<endl;

	return 0;
}