#include <iostream>
#include <cstring>
using namespace  std;

void OddEven(char *s){
	for (int i = 0; s[i]!='\0'; i++)
	{
		if (i%2==0)
	    {
	    	s[i]=s[i]+1;
	    }
	    else if(i%2!=0)
	    {
	    	s[i]= s[i]-1;
	    }
	}
	
}

int main(){
	char s[100];

	cin>>s;

	OddEven(s);
	cout<<s<<endl;

	return 0;
}