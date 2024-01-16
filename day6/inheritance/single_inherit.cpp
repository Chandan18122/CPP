#include<iostream>

using namespace std;


class A{
protected:
	int a;

public:
void setA(int x){
	this->a = x;
}

void showA(){
	cout<<"A.a = "<<a<<endl;
}

};

class B: public A{
protected:
	int b;

public:
void setB(int a,int x){
	setA(a);
	this->b = x;
}

void showB(){
	cout<<"B.b = "<<b<<endl;
}
void display(){
	showA();
	showB();
	cout<<"sum = "<<a+b<<endl;	
}

};

int main(){
	B b1;
	b1.setB(10,20);
	
	b1.display();
}
