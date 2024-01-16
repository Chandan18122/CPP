#include<iostream>

using namespace std;

class employee{
	int eid;
	public:
	virtual void salery(){
		cout<<"class = salery"<<endl;
	}

};

class devloper:public employee{
	int saler =30000;
	public:
	
	virtual void salery(){
		cout<<"devloper = 30000"<<endl;
	}

};

class tester:public employee{
	int saler =15000;
	public:
	virtual void salery(){
		cout<<"tester = 15000"<<endl;
	}


};

class hr:public employee{
	int saler =20000;
	public:
	virtual void salery(){
		cout<<"HR = 20000"<<endl;
	}

};

int main(){
	employee em,*e[4],*eptr;
	tester t;
	devloper d;
	hr h;
	
	e[0] = &em;
	e[1] = &d;
	e[2] = &t;
	e[3] = &h;
	
	for(int i=0;i<4;i++){
		eptr = e[i];
		eptr->salery();
	}
}
