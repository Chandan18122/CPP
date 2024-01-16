#include <iostream>
#include <string.h>
using namespace std;

class complex
{
	string str;
	
	public:
	complex(){}
	complex(string s)
	{
		this->str=s;
	}
	void display()
	{
		cout<<"string = "<<str<<endl;
	}

	int operator==(complex A)
	{
		if(A.str==str){return 1;}
		else return 0;
	}
	int operator>=(complex A)
	{
		
		if(A.str.length()>=str.length()){return 1;}
		else return 0;
	}

};

int main()
{
	complex obj1("abc"),obj2("defgf");
	obj1.display();
 	obj2.display();
	if(obj1==obj2)
 	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
	 if(obj1>=obj2)
{
		cout<<"greater"<<endl;
	}
	else
	{
		cout<<"not greater"<<endl;
	}
		
}

