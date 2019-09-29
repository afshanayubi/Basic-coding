#include<iostream>
using namespace std;
int firstindex(int *a,int n,int i,int m){
	if (i==n)
	{
		return -1;
	}

	if (a[i]==m)
	{
		return i;
	}

	return firstindex(a,n,i+1,m);
}
int main() {
    int a[100],n,N,m,i;
    n=sizeof(a)/sizeof(int);
    cin>>N;

    
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    cin>>m;

    int index=firstindex(a,n,0,m);
    if (index!=-1)
    {
    	cout<<index<<endl;
    }
    else{
    	cout<< -1<<endl;
    }
    return 0;
}