#include <iostream>
using   namespace  std;

int multiply(int a,int b){
	if(b==0){
		return 0;
	}

	multiply(a,b-1);
	return a+multiply(a,b-1);
}

int main(){
	int a,b;
	cin>>a>>b;

	multiply(a,b);
	cout<<multiply(a,b)<<endl;

	return 0;
}