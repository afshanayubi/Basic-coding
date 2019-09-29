#include<iostream>
#include<queue>
using namespace  std;

class node
{
public:
	int data;
	node* left;
	node* right;
	
	node(int d):data(d),left(NULL),right(NULL){

	}
	
};

class LinkedList
{
public:
	node* head;
	node* tail;
	
};

LinkedList BSTtoLL(node* root){
	LinkedList l;
	if (root==NULL)
	{
		l.head=l.tail=NULL;
		return l;
	}

	if (root->left!=NULL && root->right==NULL)
	{
		LinkedList left=BSTtoLL(root->left);

		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if (root->left==NULL && root->right!=NULL)
	{
		LinkedList right=BSTtoLL(root->right);

		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}
	else if (root->left==NULL && root->right==NULL)
	{
		l.head=l.tail=root;
		return l;
	}
	else
	{
		LinkedList left=BSTtoLL(root->left);
		LinkedList right=BSTtoLL(root->right);

		left.tail->right=root;
		root->right=right.head;

		l.head=left.head;
		l.tail=right.tail;
		return l;
	}

}

void Print(node* head){

	while(head){

		cout<<head->data<<"-->";
		head=head->right;
	}

	cout<<endl;
}

int main(){
	LinkedList l=BSTtoLL(root);
	Print(l.head);

	cout<<endl;
	return 0;
}