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

int n;
node* Createll(){
	node* head=NULL;
	node* tail=NULL;

	int no;
	cin>>no;
	n=no;

    while(no > 0){
    	int value;
    	cin>>value;

		node* n=new node(value);
		if (head== NULL)
		{
			head=tail=n;
		}
		else
		{
			tail->next=n;
			tail=n;
		}
		no--;
	}
	return head;

}

void KAppend(node* &head,int a){

	node* forward=head;
	node* backward=head;

	while(a >= 1){

		forward=forward->next;
		a--;
	}

	while(forward->next!= NULL){
		forward=forward->next;
		backward=backward->next;
	}

	forward->next=head;
	head=backward->next;
	backward->next=NULL;

}

void printll(node* head){

	while(head){
		cout<<head->data<<" ";
		head=head->next;

	}
	cout<<endl;

}

int main(){
	node* l=Createll();

	int append_no_of_elem;
	cin>>append_no_of_elem;

	append_no_of_elem=append_no_of_elem % n;
	KAppend(l,append_no_of_elem);

	printll(l);

	return 0;

}