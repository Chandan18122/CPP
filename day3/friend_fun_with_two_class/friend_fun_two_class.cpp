#include<iostream>
using namespace std;
class B;
class A
{
	int a;
public:
A(int x)
{
	a=x;
}

friend void max(A a1,B b1);	
};


class B
{
	int b;
public:
B(int x)
{
	b=x;
}

friend void max(A a1,B b1);	
};

void max(A a1,B b1)
{
	if(a1.a>b1.b)
		cout<<a1.a<<" is max"<<endl;
	else
		cout<<b1.b<<" is max"<<endl;
}

int main()
{
	A a(10);
	B b(20);
	max(a,b);
}
