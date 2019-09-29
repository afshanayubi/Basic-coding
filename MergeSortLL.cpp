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

node* mid(node* head){
	if (head==NULL || head->next==NULL)
	{
		return head;
	}

	node* slow=head;
	node* fast=head->next;

	while(fast!=NULL){
		fast=fast->next;
		if (fast!=NULL)
		{
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}

node* merge(node* a,node* b){
	if (a==NULL)
	{
		return b;
	}
	if (b==NULL)
	{
		return a;
	}

	node* c;
	if (a->data<b->data)
	{
		c=a;
		c->next=merge(a->next,b);
	}
	else
	{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}

node* mergesort(node* head){
	if (head==NULL || head->next==NULL)
	{
		return head;
	}

	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	a=mergesort(a);
	b=mergesort(b);

	node* newhead=merge(a,b);
	return newhead; 
}

int main(){
	node* head=Createll();

	head=mergesort(head);
	printll(head);

	return 0;
}