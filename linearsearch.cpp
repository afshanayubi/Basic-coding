#include<iostream>
using namespace  std;
#define ll long long

int linearSearch(ll a[],ll n,ll m){
	
	for (int i = 0; i <n; i++)
	{
		if (a[i]==m)
		{
		    return i;
		}
		
	}

	return  -1;
}
int main(){
	long long int n,a[100000],i;
	cin>>n;

	for (i = 0; i <n; i++)
	{
		cin>>a[i];
	}

	ll m;
	cin>>m;

	int index=linearSearch(a,n,m);
	cout<<index<<endl;

	return 0;
}
