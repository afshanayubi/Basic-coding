#include<iostream>
#include <string.h>
using namespace  std;

int p=0;
int Count_AAA(char *str,int i){
	int n=strlen(str);
	if (n=='\0' || n==1 || n==2)
	{
		return 0;
	}

	i=0;
	while(i<3){
		if (str[i]=='a')
		{
			i++;
		}
	}

	p++;
	Count_AAA(str,i+2);

	return p;
}

int main(){
	char str[100];

	cin>>str;

	cout<<Count_AAA(str,0)<<endl;
	cout<<p<<endl;

	return 0;
}