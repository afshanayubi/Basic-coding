#include <iostream>
#include <cstring>
using namespace  std;

char MaxFrequency(char* ch){
	int l=strlen(ch);
    int freq[256]={0};

	// for (int i = 0; i < l; i++)
	// {
	// 	freq[s[i]-'a']++;
	// }

	int max=0;
	char word;

	for (int i = 0; i < l; i++)
	{
		freq[ch[i]]++;
		if (max<freq[ch[i]])
		{
			max=freq[ch[i]];
			word=ch[i];
		}
	}

	return word;
}
int main(){
	char ch[100];

	cin>>ch;

	cout<<MaxFrequency(ch);
	cout<<endl;

	return 0;
}