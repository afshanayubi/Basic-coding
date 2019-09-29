#include<iostream>
using namespace std;
int main(){
	int n,j,i;
	cin>>n;

	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<i;

			j++;
		}
		cout<<endl;
		
	    j=2;
	    cout<<i;
		while(j<i){
			cout<<0;

			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
	
    