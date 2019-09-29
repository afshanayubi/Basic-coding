#include <iostream>
using namespace std;

int nstairs(int n,int k=3){
	if(n==0){
		return 1;
	}
	if (n<0)
	{
		return 0;
	}

	int ans=0;
	for (int i = 0; i <= k; i++)
	{
		ans=ans+nstairs(n-i,k);
	}
	return ans;
}

int main(){
	int n,k;
	cin>>n>>k;

	cout<<nstairs(n,k)<<endl;

	return 0;
}