#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int root1,root2,d;
	d=sqrt(b*b - 4*a*c);

	root1=(-b+d)/2*a;
	root2=(-b-d)/2*a;

	if (d>=0)
	{
		if (root1==root2)
		{
			cout<<"Real and Equal "<<endl;
			cout<<root1<<" "<<root2;
		}
		else{
			cout<<"Real and Distinct"<<endl;
			cout<<root2<<" "<<root1<<endl;
		}
	}
	else{
		cout<<"imaginary";
	}

	return 0;
}