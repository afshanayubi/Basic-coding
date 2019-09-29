#include <iostream>
#include <stack>
using namespace  std;

void StockSpan(int arr[],int N){

	stack<int> s;
	int ans[100]={};

	for (int i = 0; i <= N; i++)
	{
		int currprice=arr[i];
		while(!s.empty() && arr[s.top()]<currprice ){
			s.pop();
		}

		int newday;
		if (s.empty())
		{
		    newday=0;
		}
		else
		{
			newday=s.top();
		}

		int span = i-newday;
		ans[i]=span;
		s.push(i);
		
	}

	for (int i = 1; i <= N; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"END";
	cout<<endl;
}

int main(){
	int arr[100];
	int i,N;

	cin>>N;

	for (int i = 1; i <= N; i++)
	{
		cin>>arr[i];
	}

	StockSpan(arr,N);

	return 0;
}