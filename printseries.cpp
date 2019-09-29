#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;

	int p;

	for (int i = 1; i <=n1; i++)
	{
		p=3*i+2;
		if(p%n2!=0)
		{
			cout<<p<<endl;
		}
		else{
			n1=n1+1;
		}
		

	}
	return 0;
}