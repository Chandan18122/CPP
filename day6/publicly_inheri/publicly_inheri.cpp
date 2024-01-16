#include<iostream>
#include<string.h>
using namespace std;

class student{
protected:
	int roll;
	char name[30];
public:
student(){};
student(int roll,const char name[]){
	this->roll = roll;
	strcpy(this->name,name);
}

};

class test{
protected:
	int testmarks;
public:
test(){}
test(int tmarks){
	this->testmarks = tmarks;
}

};

class practical{
protected:
	int practicalmarks;
public:
practical(){}
practical(int pmarks){
	this->practicalmarks = pmarks;
}
};


class result: public student,public test,public practical {

protected:
	int totalmarks;
	
public:
void display(){
	cout<<"Roll no. = "<<roll<<endl;
	cout<<"Name = " <<name<<endl;
	cout<<"test marks = "<<testmarks<<endl; 
	cout<<"practical marks = "<<practicalmarks<<endl;
	totalmarks = testmarks + practicalmarks;
	cout<<"total marks = "<<totalmarks;
}

};

int main(){
	student s(1,"chandan");
	test t(60);
	practical p(30);
	result r;
	r.display();

}
