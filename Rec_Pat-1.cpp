#include <iostream>
using namespace  std;
void PrintPattern(int n,int i,int j){
	if (n==0)
	{
		return;
	}

	if (n==1)
	{
		cout<<"*"<<"	";
	}
	cout<<endl;
    return PrintPattern(n-1,i,j);
}

int main(){
	int i,j,n;
	cin>>n;

	PrintPattern(n,0,0);

	return 0;
}