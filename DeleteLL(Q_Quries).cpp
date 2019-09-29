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

class link
{
public:
	node* head;
	node* tail;
	link(){
		head=tail=NULL;
	}

void create(){
	int n;
	cin>>n;
	int q;
	cin>>q;

	while(n){
		n--;
		int data;
		cin>>data;
		if (head==NULL)
		{
			node* b=new node(data);
			tail=head=b;
		}
		else
		{
			node* b=new node(data);
			tail->next=b;
			tail=b;
		}
	}

	while(q){
		q--;
		int data;
		cin>>data;
		delet(data);
		printll(data);
		cout<<endl;
	}
}	
	

void delet(int pos){

	if (head)
	{
		if (pos==0)
		{
			node* temp=head;
			head=head->next;
			delete temp;
		}
		else
		{
			int p=1;
			node* temp=head;
			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=temp->next;
			temp->next=n->next;
			delete n;

		}
	}
}

void printll( int data){

	node* temp=head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;

	}

}
};

int main(){
	link l;
	l.create();

	return 0;
}