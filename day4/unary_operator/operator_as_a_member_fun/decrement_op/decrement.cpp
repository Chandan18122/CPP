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

//for post decrement
void operator--(int)
{
	x=x-1;
	y=y-1;	
}

//for pre decrement
void operator--()
{
	x=x-1;
	y=y-1;	
}


};

int main()
{
	complex a1(10,20),a2(5,5),a3;
 	a1.display();
	a1--; 
	a1.display();
	--a1;
	a1.display();
}

