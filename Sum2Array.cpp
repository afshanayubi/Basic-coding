#include <iostream>
using namespace  std;

int main(){
	int i,j=0,m,n,carry=0;
	int a[1000],b[1000],c[1000];

	cin>>m;
	for ( i = 0; i < m; i++)
	{
		cin>>a[i];
	}

	cin>>n;
	for ( i = 0; i < n; i++)
	{
		cin>>b[i];
	}

	m--;
	n--;
	while(m>=0 && n>=0){

		c[j]=a[m]+b[n]+ carry;
		carry=c[j]/10;
		c[j]=c[j]%10;
		j++;
		m--;
		n--;

	}

	while(m>=0){
		c[j]=a[m]+carry;
		carry=c[j]/10;
		c[j]=c[j]%10;
		j++;
		m--;
	}

	while(n>=0){
		c[j]=b[n];
		carry=c[j]/10;
		c[j]=c[j]%10;
		j++;
		n--;

	}

	if (carry>0)
	{
		c[j]=carry;
		j++;
	}

	for (int k = j-1; k >=0 ; k--)
	{
		cout<<c[k]<<", ";
	}
	cout<<"END"<<endl;

	return 0;
}