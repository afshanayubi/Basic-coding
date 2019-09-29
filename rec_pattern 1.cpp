#include <iostream>
using namespace  std;

void pattern(int n){
	if(n==0){
		return;
	}
	
	int i=0;
	while(i<n){
		
		int j=0;
		while(j<=i){
			cout<<"*	";
		    j++;
		}
		cout<<endl;
		i++;
	}
}


int main(){
	int n;
	cin>>n;

	pattern(n);

	return 0;
}