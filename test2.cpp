#include <iostream>
using   namespace  std;
int main()
{
	int n;
	cout<<"enter no. of rows : ";
	cin>>n;
	int i,j;

	for (int i = 1; i <=n; i++)
	{
		for (int j = n; j <=i; j--)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}