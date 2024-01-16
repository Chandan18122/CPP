#include<iostream>
using namespace std;

class student{
	char name[20];
	int rollno;
	int marks[5];
	int total;
	float percentage;
	char gread;
public:	
void setdata(){
	cout<<"Enter the roll no. : ";
	cin>>rollno;
	cout<<"Enter the student name : ";
	cin>>name;
	
	for(int i=0;i<5; i++){
		cout<<"Enter the marks "<<i+1<<" : ";
		cin>>marks[i];
	}
	
}

void totalMarks(){
	total = 0;
	for(int i=0;i<5; i++){
		total = total + marks[i];
	}
	
}
void getpercentage(){
	totalMarks();
	percentage = total / 5;
}
void display(){
	cout<<"student name : "<<name<<endl;
	cout<<"Roll no : "<<rollno<<endl;
	getpercentage();
	cout<<"Total marks : "<<total<<endl;
	cout<<"percentage : "<<percentage<<endl;
}
	
};

int main(){
	int no_student;
	cout<<"Enter the no of student : ";
	cin>>no_student;
	
	student s[no_student];
	for(int i=0;i<no_student;i++){
		s[i].setdata();
	}
	for(int i=0;i<no_student;i++){
		s[i].display();
	}
	return 0;
}
