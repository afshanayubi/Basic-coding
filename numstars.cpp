#include <iostream>
using   namespace  std;
int main()
{
	int n;
	cout<<"enter no. of rows : ";
	cin>>n;
	int i,j;
	for ( i = 0; i <n; i++)
	{
	
		for ( j = 1; j <=n-i; j++)
		{
			cout<<j<<" ";

		}
		j=1;
		while(j<=i-1){
			cout<<"*"<<" ";

			j++;
		}
		 j=0;
		while(j<=i-1){
			cout<<"*"<<" ";

			j++;
		}
		cout<<endl;

	}


    return 0;
}