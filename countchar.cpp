#include<iostrem.h>
using namespace std
int main()
{
	char ch;
	int characters=0;
	int digits=0;
	int other=0;
	int spaces=0;
	ch=cin.gets();
	while(ch!=$){
		
		if(ch>='A'&&ch<='z'){
			characters++;
		}
		else if(ch>='0'&&ch<='9'){
			digits++;
		}
		else if(ch==' '|| ch=='\n'){
			spaces++
			else
				others++;
		}

		ch=cin.gets();
	}
	cout<<characters<<digits<<spaces<<others<<endl;
	return 0;
}