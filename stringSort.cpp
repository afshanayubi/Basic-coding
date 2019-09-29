#include <iostream>
#include <cstring>
#include <algorithm>
using namespace  std;

//takes a multiple strings and prints it
int main(){
	char a[100][100];
	int n;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; i++)
	{
		
	
		cout<<a[i];
		cout<<endl;
	}

	return 0;
}
