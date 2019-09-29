#include <iostream>
using namespace std;

class car
{
	int tyres;
public:
	char *name;
	int price;
	int model;
	int seats;
	
	car(){
		cout<<"making a car"<<endl;

	}
	car(int x,int y,int z,char str[]){
		tyres=x;
		model=y;
		seats=z;

	}
	void print(){
		cout<<"name  :"<<name<<endl;
		cout<<"price  :"<<price<<"$"<<endl;
		cout<<"model  :"<<model<<endl;
		cout<<"seats  :"<<seats<<endl;

	}
	car(car &X){
		tyres=X.tyres;
		model=X.model;


	}
	void setter(){
		model=100;
		price=50;
		strcpy(name,"base");
		print();
	}
	int getter(){
		return tyres;
	}
	
};

int main(){
	car A;
	A.model=100;
	A.price=50;
	strcpy(name,"base");
	A.setter();
	cout<<A
	car b(5,4,10,)

	return 0;
	
}