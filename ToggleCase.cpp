#include <iostream>
#include <cstring>
using namespace  std;

void ToggleCase(char *s){
	for (int i = 0; s[i]!='\0'; i++)
	{
		if (s[i]>='A' && s[i]<='Z')
	    {
	    	s[i]=s[i]+'a'-'A';
	    }
	    else if (s[i]>= 'a' && s[i]<='z')
	    {
	    	s[i]= s[i]+'A'-'a';
	    }
	}
	
}

int main(){
	char s[100];

	cin>>s;

	ToggleCase(s);
	cout<<s<<endl;

	return 0;
}