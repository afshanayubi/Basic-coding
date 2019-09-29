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

	for ( i = 0; i < row; i++)
	{
		if (i%2==0)
		{
			for ( j = 0; j < col; j++)
			{
				cout<<a[i][j]<<", ";
			}
		}
		else
		{
			for ( j = col-1; j >=0 ; j--)
			{
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END"<<endl;

	return 0;
}