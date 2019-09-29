#include <iostream.h>
using  namespace std
int main()
{
	int n,ans=0,no;
	cin>>n;
	for (int i = 0; i <n; ++i){
		cin>>no;
		ans=ans^no;

	}
	cout<<ans;
	cout<<endl;

	return 0;
}

	