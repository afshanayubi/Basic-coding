#include <iostream>
using namespace std;
#define ll long long

int BinarySearch(ll a[],ll n,ll key){
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid]<key)
		{
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return -1;
}

int main(){
	long long int i,n,a[1000000];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	ll key;
	cin>>key;

	int index=BinarySearch(a,n,key);
	if (index!=-1)
	{
		cout<<index<<endl;
	}
	else{
		return -1;
	}

	return 0;
}