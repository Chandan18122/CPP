#include<iostream>
#include<fstream>

using namespace std;

class student {

	public: int roll;
	char name[25];
	float marks;
	
	void getdata(){
		cout<<"Enter the roll and name ";
		cin>>roll >> name;
		cout<<"marks ";
		cin>>marks;
	}
	
	void AddRecord(){
		fstream f; 
		student stu;
		f.open("student.dat",ios::app|ios::binary);
		stu.getdata();
		f.write((char*)&stu,sizeof(stu));
		f.close();
	}
		
};


int main(){
	student s;
	char ch='n';
	do{
		s.AddRecord();
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	cout<<"updated!!!"<<endl; 
}
