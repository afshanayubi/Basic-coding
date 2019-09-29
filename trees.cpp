#include<iostream>
#include <queue>
// #include "BinaryTrees.txt"
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

void PostOrder(node* root){
	if (root==NULL)
	{
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

int CountNode(node* root){
	if (root==NULL)
	{
		return 0;
	}

	int left=CountNode(root->left);
	int right=CountNode(root->right);
	return left+right+1;
}

int Height(node* root){
	if (root==NULL)
	{
		return 0;
	}

	int left_height=Height(root->left);
	int right_height=Height(root->right);
	return max(left_height,right_height)+1;
}

int diameter(node* root){
	if (root==NULL)
	{
		return 0;
	}

	int op1=Height(root->left)+Height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	return max(op1,max(op2,op3));
}

class Pair
{
public:
	int Height;
	int diameter;
	
};

Pair fastDiameter(node* root){
	Pair p;
	if (root==NULL)
	{
		p.Height=p.diameter=0;		
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.Height=max(left.Height,right.Height)+1;

	int op1=left.Height+right.Height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));
	return p;
}

void LevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();

		if (temp==NULL)
		{
			cout<<endl;
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<temp->data<<" ";
			if (temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if (temp->right!=NULL)
			{
				q.push(temp->right);
			}
		}
	}
}

void Mirror(node* root){
	if (root==NULL)
	{
		return;
	}

	swap(root->left,root->right);
	Mirror(root->left);
	Mirror(root->right);
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
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};
	int n=sizeof(pre)/sizeof(int);
	node* root=MakeTree(in,pre,0,n-1);

	PreOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	LevelOrder(root);
	Mirror(root);
	LevelOrder(root);
	cout<<endl;

	return 0;
}