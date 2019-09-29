#include <iostream>
#include<string.h>
using namespace  std;

int length(char *ch){
	int i;
	for ( i = 0; ch[i] != '\0'; i++)
	{
		
	}
	return i;
}

bool ispallindrome(char *ch){
	int i=0;
	int j=length(ch)-1;

	while(i<j){
		if (ch[i] != ch[j])
		{
			return false;
		}
		
		i++;
		j--;
	}

	return true;
}

int main(){
	char ch[1000];
	cin>>ch;

	if (ispallindrome(ch) == true)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}

	return 0;
}