#include <iostream>
using namespace  std;

int main(){
	int i,j,n;
	cin>>n;

	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<i<<"	";

			for(j=2; j<i; j++)
			{
				cout<<"0"<<"	";
				
			}
			j++;

		}
		if (i>1)
		{
			cout<<i;
		}
		cout<<endl;
		i++;
	}

	return 0;

}