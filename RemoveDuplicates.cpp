#include <iostream>
#include <cstring>
using namespace  std;

void removeDuplicate(char* ch){
	int l=strlen(ch);
	int j=0;

	if (l<2)
	{
		return;
	}

	for (int i = 1; i < l; i++)
	{
		if (ch[j]!=ch[i])
		{
			j++;
			ch[j]=ch[i];
		}
	}

	j++;
	ch[j]='\0';
}

int main(){
	char ch[100];

	cin>>ch;

	removeDuplicate(ch);
	cout<<ch<<endl;

	return 0;
}