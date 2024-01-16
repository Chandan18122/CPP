#include<iostream>

using namespace std;

class A{

	int a,b;
	public:
	void setdata(int x,int y){
		a=x;
		b=y;
	}
	void display(){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}

};

int main(){

	A obj,obj1,*ptr;
	
	ptr=&obj;	
	ptr->setdata(10,20);
	ptr->display();

	ptr=&obj1;	
	ptr->setdata(30,40);
	ptr->display();

}
