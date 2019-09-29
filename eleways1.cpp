 #include <iostream>
using namespace std;

int ways1(int i,int j){
	if (i==0 && j==0)
	{
		return 1;
	}

	int ans=0;
	for (int k = 1; k <=i; k++)
	{
		ans=ans+ways1(i-k,j);
	}

	for (int k = 1; k <=j; k++)
	{
		ans=ans+ways1(i,j-1);
	}

	return ans;
}

int main(){
	int i,j;
	cin>>i>>j;

	cout<<ways1(i,j)<<endl;

	return 0;
}