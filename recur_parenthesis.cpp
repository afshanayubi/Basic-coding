#include <iostream>
using namespace  std;

void parenthesis(char* str,int i){
	if (str[i]!='(')
	{
		return;
	}

	if (str[i]=='(')
	{
		cout<<str[i+1];
	}

	return parenthesis(str,i+1);
}

int main(){
	char str[100];

	cin>>str;

	parenthesis(str,0);

	return 0;
}