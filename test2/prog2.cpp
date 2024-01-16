#include<iostream>
#include<string.h>

using namespace std;

class vasitable{
	public:
	string vname ;
	string colour ;
	
	virtual void display(){
		cout<<"vestable name "<<vname<<endl;
		cout<<"vestable colour "<<colour<<endl;
	}
	
};
class potato:public vasitable{
	
	string vname = "potato";
	string colour = "white";
	public:
	virtual void display(){
		cout<<"vestable name "<<vname<<endl;
		cout<<"vestable colour "<<colour<<endl;
	}
};

class brinjal:public vasitable{
	
	string vname = "branjal";
	string colour = "bule";
	public:
	virtual void display(){
		cout<<"vestable name "<<vname<<endl;
		cout<<"vestable colour "<<colour<<endl;
	}
};

class tomato:public vasitable{

	string vname = "tomato";
	string colour = "red";
	public:
	virtual void display(){
		cout<<"vestable name "<<vname<<endl;
		cout<<"vestable colour "<<colour<<endl;
	}
};

int main(){
	vasitable v1,*e[3],*vptr;
	potato p;
	brinjal b;
	tomato t;
	e[0] = &p;
	e[1] = &b;
	e[2] = &t;
	
	for(int i=0;i<3;i++){
		vptr = e[i];
		vptr->display();
	}
	

}
