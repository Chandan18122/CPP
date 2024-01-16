#include<iostream>
#include<string.h>
using namespace std;

class student{
	int roll;
	char name[30];
public:
void setstudent(int roll,const char n[]){
	this->roll = roll;
	strcpy(name, n);
}
void showstudent(){
	cout<<"Roll no. = "<<roll<<endl;
	cout<<"Name = " <<name<<endl;
}

};

class test{
	int testmarks;
public:

void settest(int tmarks){
	this->testmarks = tmarks;
}

void showtest(){
	cout<<"test marks = "<<testmarks<<endl; 
}
int gettestmarks(){return testmarks;}
};

class practical{

	int practicalmarks;
public:

void setpractical(int pmarks){
	this->practicalmarks = pmarks;
}

void showpreactical(){
	cout<<"practical marks = "<<practicalmarks<<endl;
}
int getpracticalmarks(){ return practicalmarks; }
};


class result: public student,public test,public practical {

	int totalmarks;
	
public:
void setmarks(int a,int b){
	settest(a);
	setpractical(b);
	totalmarks = gettestmarks() + getpracticalmarks();
}
void display(){
	showstudent();
	showtest();
	showpreactical();
	cout<<"total marks = "<<totalmarks<<endl;
}

};

int main(){
	student s;
	s.setstudent(1,"chandan");
	result r;
	r.setmarks(60,30);
	r.display();

}
