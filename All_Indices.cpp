#include <iostream>
using namespace std;

int All_Indices(int a[],int b[],int n,int i,int j,int m){
	if (i == n)
	{
	    for (int j = 0; j < n; j++)
		{    
			cout<<b[j]<<" ";
		}	
		cout<<endl;
	}

	if (a[i]==m)
	{
		b[j]=i;

	}

	return All_Indices(a,b,n,i+1,j,m);
}

int main(){
	int i,j,n,a[1000],b[100];
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;

	All_Indices(a,b,n,0,0,m);
	cout<<endl;

	return 0;
}