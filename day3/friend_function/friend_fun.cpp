#include<iostream>

using namespace std;

class A 
{
	int a,b;

public:
A(int x,int y)
{
	a=x;
	b=y;
}

friend void add(A obj);

};

void add(A obj)
{
	int c = obj.a+obj.b;
	cout<<"sum is : "<<c<<endl;
}

int main(){
	A obj(10,20);
	add(obj);
	return 0;
}
