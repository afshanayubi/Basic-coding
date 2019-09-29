#include <iostream>
using namespace  std;

int main(){
	int i,j,n,k;
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		k=1;
		for ( j = 0; j <= i; j++)
		{
			if (j==0 || i==0)
			{
				k=1;
			}
			else
			{
				k=k*(i-j+1)/j;
			}
			cout<<k<<"	";
		}
		cout<<endl;
	}

	return 0;
}