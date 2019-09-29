#include <iostream>
#include <cstring>
#include <algorithm>
#include <string.h>
using namespace  std;

int compare(string *a,string *b){

	return strcmp(a,b);
}

void sort(char *arr,int n){

	qsort(arr,n,sizeof(arr),compare);

}

int main(){
	string arr[]={"bat","apple","batman"};

	sort(arr,arr+3);

	for (int i = 0; i < 3; i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}