#include <iostream>
using   namespace  std;
int main(){
	int min,max,step;
	cin>>min>>max>>step;

	int f=min;
	while(f<=max){

	    int c=5*(f-32)/9;
		cout<<f<<"	"<<c<<endl;
		f=f+step;
	}

	return 0;
}
