#include <iostream>
using namespace  std;

int ladder(int n,int k=3){
	if (n==0)
	{
		return 1;
	}
	if (n<0)
	{
		return 0;
	}

	int ans=0
	for (int i = 0; i <= k; ++i)
	{
		ans=ans+ladder(n-i,k);
	}
	return ans
}

int topdownn(int n,int *dp,int k=3){
	if (n==0)
	{
		dp[n]=1;
		return 1;
	}
	if (n<0)
	{
		return 0;
	}

	int ans=0;
	for (int i = 0; i <=k ; i++)
	{
		ans=ans+topdownn(n-i,)
	}
}

int bottumUp(){

}

int fastLadder(int n,int k=3){
	int dp[1000]={0};

	dp[0]=1;
	dp[1]=1;

	for (int i = 2; i <=n; i++)
	{
		if (i-1-k>=0)
		{
			dp[i]=2*dp[i-1]-dp[i-1-k];
		}
		else{
			dp[i]=2*dp[i-1];
		}
	}

	return dp[n];
}
int main(){
	int n;
	cin>>n;

    cout<<topdownn(n,dp)
	cout<<ladder(n)<<endl;


}