#include <iostream>
using namespace  std;

int main(){
	int a[100][100];
	int i,j,row,col;
	cin>>row>>col;

	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			cin>>a[i][j];
		}
	}

	for ( j = 0; j < col; j++)
	{
		if (j%2==0)
		{
			for ( i = 0; i < row; i++)
			{
				cout<<a[i][j]<<", ";
			}
		}
		else
		{
			for ( i = row-1; i >=0 ; i--)
			{
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END"<<endl;

	return 0;
}