#include <iostream>
#include<math.h>
using namespace  std;

bool isPerfectSqrt(int a){

	int s=sqrt(a);

	return s*s==a;
}

bool IsFibo(int n){
	int f1=5*n*n+4;
	int f2=5*n*n-4;

	return isPerfectSqrt(f1)|| isPerfectSqrt(f2);
}

int main(){
	int n;
	cin>>n;

	while(cin){

	if(IsFibo(n)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
		return 0;
	}

	cin>>n;
    }
}