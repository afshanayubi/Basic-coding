#include<iostream>
using namespace std;
int main(){
	int n,c,a=0,b=1,j;
	cin>>n;

	int i=1;
	while(i<=n){
		
		j=1;
		while(j<=i){
			
	 	cout<<a<<"	";
		
		c=b+a;
		a=b;
		b=c;

		j++;
	}
	cout<<endl;
	i++;
	}

    return 0;
}