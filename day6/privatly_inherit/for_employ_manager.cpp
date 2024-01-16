#include<iostream>
#include<string.h>
using namespace std;

class people{
	int age;
	char name[30];
	public:
	void setpeople(int a,const char n[]){
		this->roll = a;
		strcpy(name, n);
	}
	void showpeople(){
		cout<<"Name = " <<name<<endl;
		cout<<"Age = "<<age<<endl;	
	}

};

class employee: public people{
	int eid;
	char department[30];
	int salary;
	public:
	void setemp(int id,char dep[],int sala){
		this->eid = id;
		strcpy(department, dep);
		this->salary = sala;
	}

	
	int gettestmarks(){return testmarks;}
};

class manager:public employee{

	int team_size;
	char project[100];
	public:

	void setmanager(int pmarks){
		
	}

};


int main(){
	
}
