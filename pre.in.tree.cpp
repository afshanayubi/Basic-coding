#include<iostream>
#include <queue>
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

node* CreateTree(){
	int data;
	cin>>data;
	node* root;

	if (data==-1){
		return NULL;
	}
	else{
		root=new node(data);
		root->left=CreateTree();
		root->right=CreateTree();
		return root;
	}
}

void PreOrder(node* root){
	if (root==NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if (root==NULL)
	{
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}

int indx=0;
node* MakeTree(int* in,int* pre,int s,int e){
	if (s>e)
	{
		return NULL ;
	}

	int data=pre[indx];
	indx++;
	node* root=new node(data);

	int k;
	for (int i = s; i <=e; i++)
	{
		if (in[i]==data)
		{
			k=i;
			break;
		}
	}
	root->left=MakeTree(in,pre,s,k-1);
	root->right=MakeTree(in,pre,k+1,e);
	return root;
}

int main(){
	int pre[]={1,2,3};
	int in[]={3,2,1};
	int n=sizeof(pre)/sizeof(int);
	node* root=MakeTree(in,pre,0,n-1);

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;

	return 0;
}

