#include <iostream>
using namespace  std;

int fibonacci(int n){
	if (n==0||n==1)
	{
		return n;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int fib(int n,int *dp){
	if (n==0||n==1)
	{
		dp[n]=n;
		return n;
	}
	if (dp[n]!=-1)
	{
		return dp[n];
	}

	int ans=fib(n-1,dp)+fib(n-2,dp);
	dp[n]=ans;
	return ans;
}
int bottumUp(int n){
	int dp[100]={0};

	dp[0]=0;
	dp[1]=1;

	for (int i = 2; i <=n; i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	int dp[1000];


	cout<<fibonacci(n)<<endl;
	cout<<fib(n,dp)<<endl;

	return 0;
}