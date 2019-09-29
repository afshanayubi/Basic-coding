#include <iostream>
#include<math.h>
using namespace  std;

int main(){
	int n;
	cin>>n;

	while(n--){
		long long m;
		cin>> m;

		if (m%2==0)
		{
			cout<< m/2;
		}
		else
		{
			cout<< -(m/2)-1;
		}
		cout<<endl;	
	}

	return 0;
}
