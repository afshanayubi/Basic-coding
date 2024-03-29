#include <iostream>
#include <math.h>
using namespace  std;

bool isSafeToPut(int mat[][9],int i,int j,int n,int number){
	for (int k = 0; k < n; k++)
	{
		if (mat[k][j]== number)
		{
			return false;
		}
	}

	for (int k = 0; k < n; k++)
	{
		if (mat[i][k] == number)
		{
			return false;
		}
	}

	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for (int k = starti; k < starti+n; k++)
	{
		for (int l = startj; l < startj+n; l++)
		{
			if (mat[k][l] == number)
			{
				return false;
			}
		}
	}

	return true;
}

bool SudokuSolver(int mat[][9],int i,int j,int n){
	if (i == n)
	{
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l < n; l++)
			{
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if (j == n)
	{
		j=0;
		return SudokuSolver(mat,i+1,j,n);
	}

	if (mat[i][j] != 0)
	{
		return SudokuSolver(mat,i,j+1,n);
	}

	for (int number = 1; number <= n; number++)
	{
		if (isSafeToPut(mat,i,j,n,number))
		{
			mat[i][j]=number;
			bool safe=SudokuSolver(mat,i,j+1,n);
			if (safe)
			{
				return true;
			}
			mat[i][j]=0;
		}
	}
	return false;
}

int main(){
	int mat[9][9];
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<endl;

	SudokuSolver(mat,0,0,n);

	return 0;
}