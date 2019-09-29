#include <iostream>
using namespace  std;

string keys []={ " ","abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wx" , "yz"};

int cnt=0;
void KeyPadcnt(char* input,char* output,int i,int j){
	if (input[i]=='\0')
	{
		//output[j]='\0';
		//cout<<output<<" ";
		cnt++;

		return;
	}

	int index=input[i]-'0';
	for (int k = 0; keys[index][k] != '\0'; k++)
	{
		output[j]=keys[index][k];
		KeyPadcnt(input,output,i+1,j+1);
	}
}

void KeyPad(char* input,char* output,int i,int j){
	if (input[i]=='\0')
	{
		output[j]='\0';
		cout<<output<<" ";
		cnt++;

		return;
	}

	int index=input[i]-'0';
	for (int k = 0; keys[index][k] != '\0'; k++)
	{
		output[j]=keys[index][k];
		KeyPad(input,output,i+1,j+1);
	}
}

int main(){
	char a[200],b[200];
	cin>>a;

	KeyPadcnt(a,b,0,0);
	cout<<cnt<<endl;
	KeyPad(a,b,0,0);
	cout<<endl;

	return 0;
}