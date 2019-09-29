#include <iostream>
#include <string>
using namespace  std;

int Count_A(char *string,int i){
	int l=strlen(string);

	if (l==1||l==2||l=='\0')
	{
		return 0;
	}

	if (str[i]=='a')
	{
		i++;
	}

	Count_A(l-1,i+2)

	return ;
}

int main(){
	char ch[100];
	cin>>ch;

	cout<<Count_A(ch,0)<<endl;

	return 0;
}