#include<iostream>
using namespace std;

int cnt=0;
bool isSafeToPut(int board[][1000],int n,int i,int j){
	for (int k = 0; k < n; k++)
	{
		if (board[i][k] || board[k][j])
		{
			return false;
		}
	}

	int r=i,c=j;
	while(r>=0 && c>=0){
		if (board[r][c])
		{
			return false;
		}
		r--;
		c--;
	}

	r=i;
	c=j;
	while(r>=0 && c<=n-1){
		if (board[r][c])
		{
			return false;
		}
		r--;
		c++;
	}

	return true;
}

bool NQueens(int board[][1000],int n,int i){
	
	if (i==n)
	{
		for (int k =0 ; k < n; k++)
		{
			for (int l = 0; l < n; l++)
			{
				if (board[k][l]== 1)
				{
					cout<<"{"<<k+1<<"-"<<l+1<<"}"<<" ";
				}
			}
		}
		cout<<" ";
		cnt++;
		return false;
	}

	for (int j = 0; j < n; j++)
	{
		if (isSafeToPut(board,n,i,j))
		{
			board[i][j]=1;

			bool another=NQueens(board,n,i+1);
			if (another)
			{
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}

int main(){
	int n,board[1000][1000];
	cin>>n;

	NQueens(board,n,0);
	cout<<endl<<cnt;

	return 0;
}
