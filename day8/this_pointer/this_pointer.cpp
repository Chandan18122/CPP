#include<iostream>
#include<string.h>
using namespace std;

class person{

	int age;
	string name;
	public:
	void setdata(){
		cin>> age;
		cin>>name;
	}
	
	void display(){
		cout<<"Name = "<<name<<endl;
		cout<<"age = "<<age<<endl;
	}
	
	person max(person A){
		if(A.age>age) return A;
		else return *this;
	}
};

int main(){

	person p1,p2,p3;
	p1.setdata();
	p2.setdata();
	p3=p1.max(p2);
	
	p3.display();
}

