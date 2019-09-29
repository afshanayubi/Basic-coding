 #include <iostream>
using namespace  std;
int main(){
	int a[100][100],row,col;
	int i,j;
	cin>>i>>j;
	for (int row = 0; row < i; row++)
	{
		for (int col = 0; col < j; col++)
		{
			a[row][col]=row*col;
		}
		cout<<endl;
	}
	for (int row = 0; row < i; row++)
	{
		for (int col = 0; col < j; col++)
		{
			cout<<a[row][col]<<"  ";
		}
		cout<<endl;
	}
	for (int col = 0; col < i; col++){

		if (row%2==0){
			for (int row = 0; row < j; row++){
				cout<<a[row][col]<<" ";
			}
		}
		else{
			for (int row = 2; row >=0; row--){
				cout<<a[row][col];
			}
		}
	}
	return 0;
}