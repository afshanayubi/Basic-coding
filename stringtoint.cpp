#include <iostream>
#include<string>
using   namespace  std;

int stringtoint(char *a,int i){
	if(i==0){
		return 0;
	}

	int last_digit=a[i-1]-'0';
	int ans=stringtoint(a,i-1)*10+last_digit;
	return ans;
}

int main(){
	char a[1000];
	cin>>a;

	cout<<stringtoint(a,strlen(a))<<endl;

	return 0;
}