#include <iostream>
using namespace  std;

bool IsMirrorInverse(int ar1[],int ar2[],int n,int i){
	
	int b[10]={0};
	for ( i = 0; i < n ; i++)
	{
		b[ar1[i]]=i;
	}
	
	for ( i = 0; i < n; i++)
	{
		if(ar2[i]!=b[i]){
			return false;

		}
	}

	return true;
}

int main(){
	int n,i=0,ar1[10]={0},ar2[10];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>ar1[i];
	}

	for ( i = 0; i < n; i++)
	{
		cin>>ar2[i];
	}

	IsMirrorInverse(ar1,ar2,n,0);

	if (IsMirrorInverse(ar1,ar2,n,0)!=true)
	{
		cout<<"false";
	}
	else{
		cout<<"true";
	}

	cout<<endl;

	return 0;
}