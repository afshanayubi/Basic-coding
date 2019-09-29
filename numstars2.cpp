#include <iostream>
using   namespace  std;
int main()
{
	int n;
	cout<<"enter no. of rows : ";
	cin>>n;
	int i,j;

	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<j;

			j++;
		}

		while(j>i && j<=n){
				
			cout<<"*";
			j++;
		}

		i++;
		cout<<endl;
	}

	return 0;
}