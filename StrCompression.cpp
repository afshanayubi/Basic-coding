#include <iostream>
#include <cstring>
using namespace  std;

void StrCompression(char* str){

	int l=strlen(str);

	for (int i = 0; i < l; i++)
	{
		int cnt=1;
		while(i<l-1 && str[i]==str[i+1]){
			cnt++;
			i++;
		}

		if (cnt>1)
		{
			cout<<str[i]<<cnt;
		}
		else{
			cout<<str[i];
		}
	}
}

int main(){
	char str[100];

	cin>>str;

	StrCompression(str);
	cout<<endl;

	return 0;
}
