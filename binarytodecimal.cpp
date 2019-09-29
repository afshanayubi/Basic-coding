#include <iostream>
#include<math.h>
using namespace  std;

int binarytodecimal(int n){
	int ans=0;
	int i=0;
	while(n){
		ans=ans+pow(2,i)*(n%10);
        n=n/10;
		i++;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	binarytodecimal(n);
	cout<<binarytodecimal(n)<<endl;

	return 0;

}
	
