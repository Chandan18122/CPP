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

friend void operator<<(ostream &output,complex A);

};
//cout by friend function
void operator<<(ostream &output, complex A)
{	
	cout<<"x="<<A.x<<endl;
	cout<<"y="<<A.y<<endl;
}


int main()
{
	complex a1(10,20);
	
	cout<<a1;//operator<<(cout,c1);
}

