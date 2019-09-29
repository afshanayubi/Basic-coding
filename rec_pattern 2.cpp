#include <iostream>
using namespace  std;

void printstars(int n){
	if (n==1)
	{
		cout<<"*	";
		cout<<endl;
	}

	if (n==0 || n<0)
	{
		return;
	}
	else if (n>1)
	{
	    
	    int i;
	    for ( i = 0; i < n; i++)
	    {
	    	cout<<"*	";
	    }
	    cout<<endl;
	    printstars(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	printstars(n);

	return 0;
}