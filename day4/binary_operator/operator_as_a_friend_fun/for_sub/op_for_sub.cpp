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

friend complex operator-(complex A,complex B);

};
complex operator-(complex A,complex B)
{
	complex temp;
	temp.x=A.x-B.x;
	temp.y=A.y-B.y;
	return temp;
}

int main()
{
	complex a1(10,20),a2(5,5),a3;
	a3=a1-a2; //operator+(a1,a2)  as friend function
 	a3.display();
}

