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

	int sr=0,er=row-1,sc=0,ec=col-1;
	while(sr<=er && sc<=ec){
		for ( i = sc; i <= ec; i++)
		{
			cout<<a[sr][i]<<", ";
		}
		sr++;

		for ( j = sr; j <= er; j++)
		{
			cout<<a[j][ec]<<", ";
		}
		ec--;

		if (sr<=er)
		{
			for ( i = ec; i >= sc; i--)
			{
				cout<<a[er][i]<<", ";
			}
			er--;
		}

		if (sc<=ec)
		{
			for ( j = er; j >= sr; j--)
			{
				cout<<a[j][sc]<<", ";
			}
			sc++;
		}
	}

	cout<<"END"<<endl;

	return 0;
}