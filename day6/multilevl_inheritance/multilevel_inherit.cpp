#include<iostream>

using namespace std;


class A{
protected:
	int a;

public:
void setA(int a){
	this->a = a;
}

void showA(){
	cout<<"A.a = "<<a<<endl;
}

};

class B: public A{
protected:
	int b;

public:
void setB(int a,int b){
	setA(a);
	this->b = b;
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

class C: public B{
protected:
	int c;

public:
C(int a,int b,int c){
	setB(a,b);
	this->c = c;
}

void showC(){
	cout<<"C.c = "<<c<<endl;
}
void display(){
	showA();
	showB();
	showC();
	cout<<"sum = "<<a+b+c<<endl;	
}

};

int main(){
	C c1(10,20,30);
	
	c1.display();
}
