#include <iostream>
#include<math.h>
using namespace std;

int main(){
	
	int m,n;

	cin>>m>>n;
	for (int i = m; i <=n; i++)
	{
		int sum=0,p=i;
		while(i!=0)
	{
	    i=i/10;
		
		sum++;
	}
	i=p;
	int ans=0;

	while(i!=0){
		
		ans=ans+pow(i%10,sum);

		i=i/10;

	}
	i=p;
	if(ans==i){
		cout<<i<<endl;
	}
}
	return 0;
}