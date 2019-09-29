#include<iostream>
using namespace std;

int cnt=0;
char store[1000][1000];

void subsequences(char *inp,char *out,int i,int j){
	if (inp[i]=='\0')
	{
		out[j]='\0';
		strcpy(store[cnt],out);
		cnt++;
		return;
	}

	out[j]=inp[i];
	
    subsequences(inp,out,i+1,j+1);
    subsequences(inp,out,i+1,j);
    

	
}


int main(){
	char a[1000],b[1000];
	cin>>a;

	subsequences(a,b,0,0);
	cout<<cnt<<endl;
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<store[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}