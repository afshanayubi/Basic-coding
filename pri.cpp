#include <iostream>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    if(n==2){
        cout<<"2"<<endl;
    }
    else{
        cout<<2;
    }
    
    for(i=3;i<=n;i++){
        int no=i;
        for( j=2;j<=no/2;j++){
            if(no%j==0){
                no++;
             break;
        }
            
        }
        if(i==no){
            cout<<","<<" "<<no;
        }
            
    }

    return 0;
}
    
