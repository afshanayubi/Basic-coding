#include<iostream>
using namespace std;
bool isSorted(int *a,int N){
    if(N==0 || N==1){
        return true;
    }
    
    
    if(a[0]<=a[1] && isSorted(a+1,N-1))
    {
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int a[100],n;
    // N=sizeof(a)/sizeof(int);
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted(a,n)){
        cout << "true" << endl;
    }
    else{
        cout<<"false"<<endl;
    }
	return 0;
}