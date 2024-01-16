#include <iostream>
#include <string.h>

using namespace std;

class A
{
	string s;
	
public:
A()
{
	cout<<"Enter the string : ";
	cin>>s;
}

A operator+(A a)
{
	A temp;
	temp.s = s+a.s;

	return temp;
}
void display()
{
	cout<<s<<endl;
}

};


int main()
{
	A s1,s2,s3;
	s3 = s1+s2;
	s3.display();
}

