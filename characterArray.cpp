#include <iostream>
using namespace  std;

void readLine(char *ch,int s,char Delimitor='\n'){
	char a=cin.get();
	int i=0;

	while(a!=Delimitor){
		ch[i]=a;
		i++;

		if (i==s)
		{
			break;
		}
		a=cin.get();
	}
	ch[i]='\0';
}

int length(char *ch){
	int i;

	for (i = 0; ch[i]!='\0'; i++)
	{
	
	}

	return i;
}

int main(){
	int a[]={1,2,3,4};

	char ch[100];

	readLine(ch,100);
	cout<<ch<<endl;
	cout<<"Length="<<length(ch)<<endl;

	return 0;
}