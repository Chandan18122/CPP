#include<iostream>
#include<string.h>

using namespace std;

class persion{
	int age;
	string name;
	
	public:
	persion(){}
	persion(string name,int age){
		this->age = age;
		this->name = name;
	}

	void showp(){
		cout<<"Name = "<<name<<endl;
		cout<<"Age = "<<age<<endl;
	}

};

class employee:public persion {
	int eid;
	string dept;
	int salary;
	
	public:
	employee(){}
	employee(string name,int age,int eid,string dept,int salary):persion(name,age){
		this->eid=eid;
		this->dept=dept;
		this->salary=salary;
	}

	void showe(){
		cout<<"EID = "<<eid<<endl;
		cout<<"Dept = "<<dept<<endl;
		cout<<"salary = "<<salary<<endl;
	}
};

class manager: public employee{
	string project;
	int teamsize;
	
	public:
	manager(){}
	manager(string name,int age,int eid,string dept,int salary,string project,int size):employee(name,age,eid,dept,salary){
		this->project=project;
		this->teamsize=size;
	}
	
	void showm(){
		cout<<"Project = "<<project<<endl;
		cout<<"Team size = "<<teamsize<<endl;
	}
	void display(){
	
		showp();
		showe();
		showm();
	}
};


int main(){
	manager m1("chandan",21,616,"pes",10000,"carear veda",5);
	m1.display();
}
