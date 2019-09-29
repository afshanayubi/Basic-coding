#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int sum=0;
	int n;

	cin>>n;
	int m=n,r=n;

   while(n!=0)
	{
	    n=n/10;
		
		sum++;
	}
	int p=sum;
	sum=0;

	while(m!=0){
		
		sum=sum+pow(m%10,p);

		m=m/10;

	}
	if (sum==r)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<< "false"<<endl;
	}
	return 0;

}