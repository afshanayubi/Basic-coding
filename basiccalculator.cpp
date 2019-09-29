#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    int a,b;

    do{
    	switch(ch){
    	case'+':
    	cin>>a>>b;
    	cout<<a+b<<endl;
        break;

    	case'-':
        cin>>a>>b;
    	cout<<a-b<<endl;
        break;

    	case'*':
        cin>>a>>b;
    	cout<<a*b<<endl;
        break;

    	case'/':
        cin>>a>>b;
        if (b!=0)
        {
            cout<<a/b<<endl;
        }
        else
        {
            cout<<"Invalid operation. Try again.";
        }
    	break;

    	case'%':
        cin>>a>>b;
        if(b!=0){
            cout<<a%b<<endl;
        }
        else
        {
            cout<<"Invalid operation. Try again.";
        }
    	break;

    	case 'x':
    	case 'X':

    		return 0;
    	break;

    	default:
        cout<<"Invalid operation. Try again."<<endl;

    }
	cin>>ch;
    }while(1);


    return 0;
}