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

node* Createll(int s){
	node* head;
	int data;
	cin>>data;

	while(data!=s){
		node* n=new node(data);
		n->next=head;
		head=n;

		cin>>data;
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

int length(node* head){
	int cnt=0;
	while(head){

		cnt++;

		head=head->next;
	}
	return cnt;

}

void SelectionLL(node* head){
	int len=length(head);
	node* current;
	node*prev;
	node* n;

	for (int i = 1; i < len; i++)
	{
		current=head;
	 	prev=NULL;

	 	
	}

}


int main(){
	int s;
	cin>>s;
	node* head=Createll(s);
}