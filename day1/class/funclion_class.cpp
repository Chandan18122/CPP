#include<iostream>
using namespace std;

class A{
	public:
	void f1(){
		cout<<"This is f1 \n";
	}
	void f2();
};

void A::f2(){
	cout<<"This is f2";
}	

int main(){
	A a1,a2;
	
	a1.f1();
	a1.f2();
	a2.f1();
	a2.f2();
	return 0;

}

