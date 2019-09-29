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

void swap(node* a,node* b){
	int  temp=a->data;
	a->data=b->data;
	b->data=temp;
}

void BubbleSort(node* head){
	int len=length(head);
	node* current;
	node* prev=NULL;

	if (head==NULL)
	{
		return;
	}

	for (int i = 0; i < len; i++)
	{
		current=prev=head;

		while(current->next!=NULL){

			if (current->data>current->next->data)
			{
				swap(current,current->next);
			}
			current=current->next;
		}
		prev=current;
		
	}
}



int main(){
	node* head=Createll();

	BubbleSort(head);
	printll(head);

	return 0;
}