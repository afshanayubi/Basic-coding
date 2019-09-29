#include <iostream>
using namespace  std;

int Triangle(int n){
	if (n == 0)
	{
		return -1;
	}

	if (n==1)
	{
		return n;
	}

	int ans=Triangle(n-1);

	return n+ans;
}

int main(){
	int n;
	cin>>n;

	int ans=Triangle(n);
	cout<<ans<<endl;

	return 0;
}