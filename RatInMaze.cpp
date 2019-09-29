#include <iostream>
using  namespace  std;

bool RatInMaze(char maze[][100],int Sol[][100],int i,int j,int n,int m){
	if (i== m-1 && j== n-1)
	{
		for (int k = 0; k < m; k++)
		{
			for (int l = 0; l < n; l++)
			{
				cout<<Sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	Sol[i][j]=1;
	if (j+1<n && maze[i][j+1]!='X')
	{
		bool RightWay=RatInMaze(maze,Sol,i,j+1,m,n);
		if (RightWay)
		{
			return true;
		}
	}

	if (i+1<m && maze[i+1][j]!='X')
	{
		bool DownWay=RatInMaze(maze,Sol,i+1,j,m,n);
		if (DownWay)
		{
			return true;
		}
	}

	Sol[i][j]=0;
	return false;

}

int main(){
	int row,col;
	cin>>row>>col;

    char maze[row][1000]={0};
   
	for (int i = 0; i < row; i++)
        {
	     	for (int j = 0; j <col; j++)
	  	        {
	  		        cin>>maze[i][j];
      	        }
        }
	

	int Sol[100][100]={0};
	RatInMaze(maze,Sol,0,0,row,col);

    return 0;
}