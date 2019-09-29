#include <iostream>
#include<math.h>
using namespace std;

bool armstrongnumber(int no){
	int num=no,p=0,ans=0;

   while(num!=0)
	{
	    num=num/10;
		
		p++;
	}
	num=no;

	while(num!=0){
		int rem=num%10;
		
		ans=ans+pow(rem,p);

		num=num/10;

	}
	if (ans==num)
	{
		return true;
	}
	else{
		return false;
	}

}

int main() {
	int no;
	cin>>no;

	armstrongnumber(no);
	if(armstrongnumber(no)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}

	return 0;
}