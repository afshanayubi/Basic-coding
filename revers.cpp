#include<iostream.h>
using namespase std
int main()
{
	int n;
	cin>>n;

	while(n>0){

          cout<<n%10<<" ";
          n=n/10;
	}
	cout<<endl;
	return 0;

}