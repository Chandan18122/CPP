#include <iostream>

using namespace std;

class Box{

	int l,b,h;
public:
Box(){}
Box(int a=0,int b=0, int c=1)
{
	l=a;
	this->b=b;
	h=c;
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
	Box b1,b2(10,10,10);
	b1.display();
	b2.display();
	return 0;
}
