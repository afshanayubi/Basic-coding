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
	while(er>=sr && ec>=sc){
		for ( i = sr; i <= er; i++)
		{
			cout<<a[i][sc]<<", ";
		}
		sc++;

		for ( j = er; j <= ec; j++)
		{
			cout<<a[er][j]<<", ";
		}
		er--;

		if (sr<er)
		{
			for ( i = er; i >= sr; i--)
			{
				cout<<a[i][ec]<<", ";
			}
			ec--;
		}

		if (sc<ec)
		{
			for ( j = ec; j >= sc; j--)
			{
				cout<<a[sr][j]<<", ";
			}
			sr++;
		}
	}

	cout<<"END"<<endl;

	return 0;
}