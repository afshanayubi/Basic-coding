#include <iostream>
using namespace  std;

int mincoins(int amount,int *coins,int n){
	if (amount==0)
	{
		return 0;
	}

	int ans=INT_MAX;
	for (int i = 0; i < ; ++i)
	{
		/* code */
	}
}

int bottomUp(int amount,int *coins,int n){
	int dp[1000];

	for (int i = 0; i <= amount; i++)
	{
		dp[i]=INT_MAX;
	}

	dp[0]=0;

	for (int rupay = 1; rupay <=amount; rupay++)
	{
		for (int i = 0; i < n; i++)
		{
			if (rupay-coins[i]>=0)
		    {
			
		    }
		
		}

	}
}
int main(){
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);

	int amount;
	cin>>amount;


}