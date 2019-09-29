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
	int no;
	cin>>no;
	while(no){
		no--;
		int data;
	    cin>>data;
		node* n=new node(data);
		n->next=head;
		head=n;
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

void BubbleSort(node* &head){
	int len=length(head);
	node* current;
	node*prev;
	node* n;

	for (int i = 1; i < len; i++)
	 {
	 	current=head;
	 	prev=NULL;
	 	while(current && current->next){
	 		n=current->next;

	 		if (current->data>n->data)
	 		{
	 			if (prev==NULL)
	 			{
	 				current->next=n->next;
	 				n->next=current;
	 				head=prev=n;
	 			}
	 			else
	 			{
	 				current->next=n->next;
	 				n->next=current;
	 				prev->next=n;
	 				prev=n;
	 			}
	 		}
	 		else
	 		{
	 			prev=current;
	 			current=n;
	 		}
	 	}
	 } 
}

int main(){
    node* head=Createll();

	BubbleSort(head);

	printll(head);

	return 0;

}