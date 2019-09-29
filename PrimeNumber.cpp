#include<iostream.h>
using namespace std
int main()
{
	int n,i,j;
	cin>>n;
	if(n==2){
		cout<<2<<endl;
		return0;
	}
	for(i=3;i<n;i++)
	{
		int no=i;
		for(j=2;j<no-1;j++){
			if(no%i==0)
				break;

			}
		}
	}
	/* code */
	return 0;
}