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

int operator==(complex A)
{
	if(A.x==x && A.y==y){return 1;}
	else return 0;
}

};

int main()
{
	complex a1(10,20),a2(5,5);
	a1.display();
 	a2.display();
	if(a1==a2) //a1.operator==(a2);
 	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
}

