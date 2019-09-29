#include <iostream>
using namespace  std;

int main(){
	int i,j,n,sp,k;
	cin>>n;
	k=n;

	for ( i = 1; i <=2*n+1; i++){

		int a=k;
		for ( j = 1; j <=i ; j++)
		{
			cout<<a--<<" ";
		}
			
		cout<<endl;
	}

	return 0;
}