#include<iostream>
using namespace  std;

int main(){
	int n;
	int ans=0,m=1,rem;
	cin>>n;

	while(n!=0){
		rem=n%8;
		ans=rem*m+ans;
		m=m*10;

		n=n/8;
	}

	cout<<ans<<endl;
	return 0;
}