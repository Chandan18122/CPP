#include<iostream>
using namespace std;

class cricker{
	char name[20];
	int no_of_match;
	int total_run;
	int higest_run;
	int hund;
	float avg;
public:	
void setdata(){
	cout<<"Enter the player name : ";
	cin>>name;
	cout<<"Enter the no of match : ";
	cin>>no_of_match;
	cout<<"Enter the total run : ";
	cin>>total_run;
	cout<<"Enter the higest run in one match : ";
	cin>>higest_run;
	cout<<"Enter the total no of 100 : ";
	cin>>hund;
	cout<<"Enter the avg : ";
	cin>>avg;
}

void display(){
	cout<<"Name\t" << "no of match\t" <<"total_run\t" <<"higest_run\t" <<"hund\t" <<"avg" <<endl;
	cout<<name<<"\t" << no_of_match<<"\t" <<total_run<<"\t" <<higest_run<<"\t" <<hund<<"\t" <<avg <<endl;
}
};

int main(){
	cricker c;
	c.setdata();
	c.display();
	
	return 0;
}

