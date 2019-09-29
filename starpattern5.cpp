#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	int p=(n+1)/2;

    i=1;
	while(i<=p){
		
		j=p-i;
        while(j>=1){
			cout<<"  ";

			j--;
		}

		j=1;
		while(j<=(2*i-1)){
            cout<<"* ";

			j++;
		}
		i++;
		cout<<endl;
	}

	i=i-2;
	while(i>=1){
		j=p-i;
		while(j>=1){
			cout<<"  ";

			j--;
		}

		j=1;
		while(j<=(2*i-1)){
			cout<<"* ";

			j++;
		}

		i--;
		cout<<endl;
	}
	return 0;
}