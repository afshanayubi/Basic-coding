#include<iostream>
using namespace std;
int main(){
	int n,j,i;
	cin>>n;

	i=1;
	while(i<=n){

		if (i%2==1)
		{
			j=1;
			while(j<=i){
				cout<<1;

				j++;
			}
			cout<<endl;
		}
		else{
			j=2;
			cout<<1;
			while(j<i){
				cout<<0;

				j++;
			}
			if (j==i)
			{
				 cout<<1;
			}
			cout<<endl;
		}
		i++;
	}
	return 0;
}
	
    