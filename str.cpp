#include <iostream>
#include <cstring>
#include <algorithm>
using namespace  std;

int main(){
	string s[]={0};
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		cin>>s[i];
	}

	sort(s,s+n);

	for (int i = 0; i < n; i++)
	{
		cout<<s[i];
		cout<<endl;
	}

	return 0;
}