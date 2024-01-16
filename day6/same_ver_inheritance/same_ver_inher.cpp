#include<iostream>

using namespace std;


class A{
protected:
	int a;

public:
void setA(int a){
	this->a = a;
}

};

class B: public A{
protected:
	int a;

public:
B(int a,int b){
	setA(a);
	this->a = b;
}

void showB(){
	cout<<"B.b = "<<a<<endl;
}
void display(){
	cout<<"A.a = "<<A::a<<endl;
	showB();
	cout<<"sum = "<<A::a+a<<endl;	
}

};


int main(){
	B b1(10,20);
	
	b1.display();
}
