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
friend void operator>>(istream &input,complex &A);

};
//cout by friend function
void operator<<(ostream &output, complex A)
{	
	cout<<"x="<<A.x<<endl;
	cout<<"y="<<A.y<<endl;
}
//cin by friend function
void operator>>(istream &input, complex &A)
{	
	cin>>A.x;
	cin>>A.y;
}

int main()
{
	
	complex a1;
	cin>>a1; //operator>>(cin,a1);
	
	cout<<a1;//operator<<(cout,a1);
}

