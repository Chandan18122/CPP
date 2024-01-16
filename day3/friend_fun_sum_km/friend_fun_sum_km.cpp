#include<iostream>
using namespace std;
class DB;
class DM
{
	float km,meter;

public:DM(){}

public:
DM(int x,int y)
{
	km=x;
	meter=y;
}

friend DM sum(DM a1,DB b1);	

void display()
{
	cout<<"KM = "<<km<<endl;
	cout<<"Meter = "<<meter<<endl;
}
};


class DB
{
	float feet,inches;
public:
DB(int x,int y)
{
	feet=x;
	inches=y;
}

friend DM sum(DM a1,DB b1);	
};

DM sum(DM a1,DB b1)
{
	DM temp;
	temp.km= a1.km + b1.feet/3281;
	temp.meter = a1.meter + b1.inches/39.37;
	return temp;
}

int main()
{
	DM a(2,10);
	DB b(50,10);
	DM c = sum(a,b);
	c.display();
}
