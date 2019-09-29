#include <iostream>
using   namespace  std;
int main()
{
	int n;
	cout<<"enter no. of rows : ";
	cin>>n;
	int i=1;
	while(i<=n){
		int sp=1;
		while(sp<=n-i){
			cout<<"	";

			sp++;
		}
		int val=i;
		int j=1;
		while(j<=i){
			cout<<val<<"	";

			val++;
			j++;
		}
		val=val-2;
		 j=1;
		while(j<=i-1){
			cout<<val<<"	";

			val--;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}