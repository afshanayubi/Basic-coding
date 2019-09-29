#include <iostream>
#include<cstring>
using namespace  std;

int main(){
	char num[1000];
	cin>>num;
	int len=strlen(num);

	long int i=0;
	while(i<len){
		if (i>0)
		{
			switch(num[i]){
			case '0':
			    cout<<"000";
			    break;
			case '1':
			    cout<<"001";
			    break;
			case '2':
			    cout<<"010";
			    break;
			case '3':
			    cout<<"011";
			    break;
			case '4':
			    cout<<"100";
			    break;
			case '5':
			    cout<<"101";
			    break;
			case '6':
			    cout<<"110";
			    break;
			case '7':
			    cout<<"111";
			    break;                                    
		
		    }
		}
		else
		{
			switch(num[i]){
			case '1':
			    cout<<"1";
			    break;
			case '2':
			    cout<<"10";
			    break;
			case '3':
			    cout<<"11";
			    break;
			case '4':
			    cout<<"100";
			    break;
			case '5':
			    cout<<"101";
			    break;
			case '6':
			    cout<<"110";
			    break;
			case '7':
			    cout<<"111";
			    break;                                    
		
		    }
		}
		i++;
	}

	cout <<endl;
	return 0;
}