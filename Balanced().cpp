#include <iostream>
#include <stack>
using namespace  std;

bool IsBalanced(char* a){

	stack<char> s;

	for (int i = 0; a[i]!='\0'; i++)
	{
		char ch=a[i];

		switch(ch){

			case'{':
			case'(':
			case'[':
			s.push(ch);
			break;

			case'}':
			if (!s.empty() && s.top()=='{')
			{
				s.pop();
			}
			else{
				return false;
			}
			break;

			case')':
			if (!s.empty() && s.top()=='(')
			{
				s.pop();
			}
			else{
				return false;
			}
			break;

			case']':
			if (!s.empty() && s.top()=='[')
			{
				s.pop();
			}
			else{
				return false;
			}

		}
	}

	return s.empty();
}

int main(){
	char ch[1000];
	cin>>ch;

	if (IsBalanced(ch))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}

	return 0;
}