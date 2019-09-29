#include <iostream>
using namespace  std;

int main(){
	int ar[10],n,i;
	cin>>n;

	for ( i = 0; i < n; i++)
	{
		cin>>ar[i];
	}

	int Fact_Sum=0;
	i=0;
	while(i<n){

		int ans=1;
	    for (int j = 2; j <= ar[i]; j++)
	    {
		    ans=(ans*j)%107;
	    }

		Fact_Sum=Fact_Sum+ans;
		i++;
	}

    int rem;
	rem=Fact_Sum % 107;

	cout<<rem<<endl;

	return 0;
}