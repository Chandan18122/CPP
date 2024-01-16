#include <iostream>

using namespace std;

class Box{

	int l,b,h;
public:
//
Box(int a=0,int b=0, int c=1)
{
	l=a;
	this->b=b;
	h=c;
}
//copy constructor
Box(Box &obj)
{
	this->l=obj.l;
	this->b=obj.b;
	this->h=obj.h;
}
int volume(){
	return l*b*h;
}

void display()
{
	cout<<"l = "<<l<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"h = "<<h<<endl;
	cout<<"volume = "<<volume()<<endl;

}
};

int main(){
	Box b1,b2(10,10,10),b3(b2);
	b1.display();
	b3.display();
	return 0;
}
