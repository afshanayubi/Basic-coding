#include <iostream>
#include <vector>

class Minheap 
{
	vector<int> v;

	void heapify(int index){
		int min_index=index;

		int left=2*index;
		int right=left+1;

		if (left<v.size() && v[min_index]>v[left])
		{
			min_index=left;
		}
		if (right<v.size() && v[min_index]>v[right])
		{
			min_index=right;
		}

		if (min_index!=index)
		{
			swap(v[min_index],v[index]);
			heapify(min_index);
		}


	}
public:

	void push(int data){
		v.push_back(data);

		int index=v.size()-1;
		int parent=index/2;

		while(index>1)
	}
	Minheap(){
		v.push_back(-1);
	}
	
};
int main(){
	Minheap h;
	int a[]={1,};
	int n=sizeof(a)/sizeof(int);

	for (int i = 0; i < n; i++)
	{
		h.push(a[i]);
	}
}