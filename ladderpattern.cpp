#include <iostream>
using   namespace  std;
int main()
{
	int n;
	cout<<"enter no. of rows : ";
	cin>>n;
	int i,j;

	i=1;
	int no=1;
	while(i<=n){
		j=1;
		while(j<=i){
	
			cout<<no<<"	";
            
            no++;
            j++;
		}
	    cout<<endl;
        
        i++;
	}
	return 0;
}