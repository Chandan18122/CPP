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
	cout<<x<<","<<y<<endl;
	//cout<<y<<endl;
}

friend void operator++(complex &A,int);
friend void operator++(complex &A);
};
//post increment
void operator++(complex &A,int)
{	
	A.x=A.x+1;
	A.y=A.y+1;
}
//pre increment
void operator++(complex &A)
{	
	A.x=A.x+1;
	A.y=A.y+1;
}

int main()
{
	complex a1(10,20),a2(5,5),a3;
	a1.display();
	++a1;
 	a1.display();
	a1++;
 	a1.display();
}

