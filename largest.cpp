#include <iostream>
using   namespace  std;
int main(){
	int a[5];
	int i,max;
	for ( i = 0; i < 5; i++)
	{
		cin>>a[i];
	}

	for ( i = 0; i < 5; i++)
	{
		max=a[0];
		if(a[i]<a[i+1]){
			max=a[i];
		}
		cout<<max<<endl;
	}

	return 0;
}