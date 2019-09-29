#include <iostream>
using namespace  std;

class node
{
public:
	int value;
	string key;
	node* next;
	
	node(string key,int value){
		this->key=key;
		this->value=value;
		next=NULL;
	}
};
// template<typename T>
class Hashmap
{
	int HashFn(string key){

	}

	void rehash(){
		node** oldBucket=Bucket;
		int oldts=ms;

		cs=0;
		ms=2*ms;
		Bucket=new node*[ms];
		for (int i = 0; i < ms; i++)
		{
			Bucket[i]=NULL;
		}

		for (int i = 0; i < oldts; i++)
		{
			node* temp=oldBucket[i];
			while(temp){
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			if (oldBucket[i]!=NULL)
			{
				delete oldBucket[];
			}
		}
	}
public:
	node** Bucket;
	int cs;
	int ms;

	Hashmap(int s=7){
		cs=0;
		ms=s;
		Bucket=new node*[ms];

		for (int i = 0; i < s; i++)
		{
			Bucket[i]=NULL;
		}
	}

	void insert(string key,int value){
		int i=HashFn(key);



	}
	
};
int main(){
	Hashmap h;
	h.insert("Mango",100);
	h.insert("Pineapple",30);

	h["Apple"]=140;
	

}