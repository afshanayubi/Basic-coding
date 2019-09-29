#include <iostream>
using namespace  std;

int Uniqenumber(int a[],int n){
	int num=0,i;

	for ( i = 0; i < n; i++)
	{
		num=num^a[i];
	}

	return num;
}

int main(){
	int a[1000],n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	cout<<Uniqenumber(a,n)<<endl;

	return 0;
}