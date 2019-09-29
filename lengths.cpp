#include <iostream>
#include<string.h>
using   namespace  std;

int length(char *ch){
	int i;
	for (i = 0; ch[i] !='\0'; i++)
	{
		
	}
	return i;
}


int main(){
	char ch[1000];
	cin.getline(ch,1000);

	int ans=length(ch);
	cout<<ans<<endl;
	return 0;

}