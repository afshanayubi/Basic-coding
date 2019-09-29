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
	int data;
	cin>>data;

	while(data!=-1){
		if(head==NULL){
            node* n=new node(data);
            head=tail=n;
            }
            else{
                node* n=new node(data);
		        tail->next=n;
		        tail=n;
                }

		cin>>data;
	}
	return head;
}

node* KthLast(node* head,int k){

	node* slow=head;
	node* fast=head;

	int cnt=0;
	if (head!=NULL)
	{
		while(cnt<k){
			if (fast==NULL)
			{
				return 0;
			}
			else
			{
				fast=fast->next;
			}
			cnt++;
		}
		while(fast!=NULL){

		slow=slow->next;
		fast=fast->next;
	}
	}

	return slow;
}

int main(){
	node* head=Createll();
    int k;
	cin>>k;

	node* a=KthLast(head,k);
    cout<<a->data<<endl;

	return 0;
}