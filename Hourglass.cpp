#include <iostream>
using namespace  std;

int main(){
	int i,j,n,sp,k;
	cin>>n;
	k=n;

	for ( i = n; i >=0; i--)
	{
		k=i;
		sp=2*(n-i);
		while(sp!=0){
			cout<<" ";
			sp--;
		}

		for ( j = 1; j <= 2*i+1; j++)
		{
			if (j<=i)
			{
				cout<<k--<<" ";
			}
			else
			{
				cout<<k++<<" ";
			}
		}
		cout<<endl;
	}

	for ( i = 1; i <=n; i++)
	{
		k=i;
		sp=2*(n-i);
		while(sp!=0){
			cout<<" ";
			sp--;
		}

		for ( j = 1; j <= 2*i+1; j++)
		{
			if (j<=i)
			{
				cout<<k--<<" ";
			}
			else
			{
				cout<<k++<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}