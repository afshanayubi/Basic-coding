#include <iostream>
using namespace  std;

bool compare(int a,int b){
	string s1=to_string(a);
	string s2=to_string(b);
	string s12=s1+s2;
	string s21=s2+s1;

	if (s21.compare(s12)<0)
		return true;
	else
		return false;
}

int main(){
	int t;
	cin>>t;

	while(t>0){

		int n,a[200];
		cin>>n;

		for (int i = 0; i < n; i++)
			cin>>a[i];

		for (int i = 0; i <= n-2; i++)
		{
			for (int j = 0; j <= n-2; j++)
			{
				if ((compare(a[j],a[j+1])))
					swap(a[j],a[j+1]);
			}
		
		}

		for (int i = n-1; i >= 0; i--)
		{
			cout<<a[i];
		}
		t--;
	}

	return 0;
}