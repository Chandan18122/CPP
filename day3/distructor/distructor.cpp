#include<iostream>
using namespace std;

class A
{
	static int count;

public:
A()
{
	count++;
	cout<<"No of object ="<<count<<endl;
}

~A()
{
	cout<<"No of object ="<<count<<endl;
	count--;
}

};

int A::count;

int main()
{
	A a1,a2;
	{
		A a3,a4;
		{
			A a5,a6;
		}
	}
	return 0;
}
