#include <iostream>
using namespace  std;

int main(){
	int n,i=0,ar[10]={0},j;
	cin>>n;

	while(n!=0){

		ar[i+1]=n%10;
		n=n/10;
		i++;
	}

	j=i;
	int b[10]={0};
	for (int i = 1; i <= j ; i++)
	{
		b[ar[i]]=i;
	}

	for (int i = j; i >= 1; i--)
	{
		cout<<b[i];
	}
	cout<<endl;

	return 0;
}