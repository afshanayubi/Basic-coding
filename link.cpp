// lecture 13
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
class linkedlist
{
public:
	node* head;
	node* tail;
	
	linkedlist(){
		head=tail=NULL;
	}
	
	void InsertAtFront(int data){
		if (head==NULL)
		{
			node* n=new node(data);
			head=tail=n;
		}
		else{
			node* n=new node(data);
			n->next=head;
			head=n;
		}
	}

	void InsertAtEnd(int data){
		if (head==NULL)
		{
			node* n=new node(data);
			head=tail=n;
		}
		else{
			node* n=new node(data);
			tail->next=n;
			tail=n;
		}
	}

	int Length(){
		node* temp=head;
		int cont=0;
		while(temp!=NULL){
			cont++;
			temp=temp->next;
		}
		return cont;
	}

	void InsertAtMid(int data,int pos){
		if (pos==0)
		{
			InsertAtFront(data);
		}
		else if (pos>=Length())
		{
			InsertAtEnd(data);
		}
		else{
			node* temp=head;
			int p=1;
			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=new node(data);
			n->next=temp->next;
			temp->next=n;
		}

	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<endl;
	}
};

int main(){
	linkedlist l;

	l.InsertAtFront(1);
	l.InsertAtFront(2);
	l.InsertAtFront(3);
	l.InsertAtFront(4);
	l.print();
	l.InsertAtEnd(5);
	l.print();
	cout<<l.Length()<<endl;
	l.InsertAtMid(0,2);
	l.print();


	return 0;
}