#include <iostream>
using namespace  std;

int Mincost(int cost[][4],int i,int j){
	if (i==0||j==0)
	{
		return cost[i][j];
	}
	
}

int main(){
	int cost[][4]={
		{1,1,2,3},
		{2,1,1,1},
		{3,5,6,2},
		{1,2,3,1}

	};
	int i,j;
	cin>>i>>j;
	cout<<Mincost(cost)

	return 0;
}