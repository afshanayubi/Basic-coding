#include <iostream>
using namespace  std;

class node
{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

node* Createll(){
	node* head=NULL;
	node* tail=NULL;
	int no;
	cin>>no;
	while(no){
		no--;
		int data;
	    cin>>data;
		if(head==NULL){
            node* n=new node(data);
            head=tail=n;
            }
            else{
                node* n=new node(data);
		        tail->next=n;
		        tail=n;
                }
	}
	return head;

}

void printll(node* head){

	while(head){
		cout<<head->data<<" ";
		head=head->next;

	}
	cout<<endl;
}