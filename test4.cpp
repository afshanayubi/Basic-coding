#include<iostream>
using namespace std;
int main(){
	int n,j,i;
	cin>>n;

	i=1;
	while(i<=n){          
		if (n<=2)
		{
			j=1;
			while(j<=i){
				cout<<1;
				cout<<endl;

				j++;
			}

		}
		else{

		j=1;
		while(j<=i){
			cout<<i;

			j++;

		}
	}
		i++;
		cout<<endl;
	}
	return 0;
}