#include <iostream>

using namespace std;

class complex
{
	int x,y;
	
public:
complex(){}
complex(int a, int b)
{
	x=a;
	y=b;
}
void display()
{
	cout<<x<<endl;
	cout<<y<<endl;
}
complex operator+(complex A)
{
	complex temp;
	temp.x=x+A.x;
	temp.y=y+A.y;
	return temp;
}

};

int main()
{
	complex a1(10,20),a2(5,5),a3;
	a3= a1+a2; //a1.operator+(a2);as member function
 	a3.display();
}

