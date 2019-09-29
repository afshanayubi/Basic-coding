#include<iostream>
using namespace  std;

class node
{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
	
};

node* createLL(){
	node* head=NULL;
	int data;
	cin>>data;

	while(data!=-1){
		node* n=new node(head);
		n->next=head;

		cin>>data;
	}
	return head;
}