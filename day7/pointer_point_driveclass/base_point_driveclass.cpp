#include<iostream>

using namespace std;

class base{
	public:
	int a;
	void show(){
		cout<<"a = "<<a<<endl;
	}
	
};

class derived:public base{
	public:
	int b;
	void show(){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
	
};

int main(){
	base b1,*bptr;
	derived d1,*dptr;
	
	bptr=&b1;
	bptr->a=100;
	bptr->show();

	bptr=&d1;
	bptr->a=200;
	bptr->show();
	
	dptr=&d1;
	dptr->b=100;
	dptr->show();
}
