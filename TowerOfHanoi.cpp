#include <iostream>
#include<cstring>
using namespace  std;

int cnt=0;
void TOH(int n,char source,char helper,char destination){
	if (n==0)
	{
		return;
	}

	TOH(n-1,source,destination,helper);
	cout<<"Move "<<n<<"th disc from T"<<source<<" to T"<<destination<<endl;
	TOH(n-1,helper,source,destination);
	::cnt++;
}

int main(){
	int n;
	cin>>n;

	TOH(n,'1','3','2');
	cout<<::cnt<<endl;

	return 0;
}