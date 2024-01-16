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
//for post increment
/*complex operator++(int)
{
	complex temp;
	temp.x=1+x;
	temp.y=1+y;
	return temp;	
}*/
//for post increment
void operator++(int)
{
	x=1+x;
	y=1+y;	
}

//for pre increment
void operator++()
{
	x=1+x;
	y=1+y;	
}


};

int main()
{
	complex a1(10,20),a2(5,5),a3;
 	a1.display();
	a1++; //a1.operator++();
	a1.display();
	++a1;
	a1.display();
}

