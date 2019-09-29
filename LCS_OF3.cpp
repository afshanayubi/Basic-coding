#include <iostream>
#include <cstring>
using namespace  std;

int main(){
	char str[100];
	int n;

	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin.get(str);
	}

	longSubs(str);

	return 0;
}