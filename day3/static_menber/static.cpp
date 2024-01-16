#include <iostream>

using namespace std;

class A {
	int a;
	int b;
	static int count;
public:
void setdata(int x, int y){
	a=x;
	b=y;
	count++;
}
static void getcount()
{
	cout<<"count = "<<count<<endl;
}
void display()
{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
};
int A::count = 0;
int main()
{
	A a[3];
	A::getcount();
	for(int i=0;i<3;i++){
		a[i].getcount();
	}
	
	a[0].setdata(2,3);

	for(int i=0;i<3;i++){
		a[i].getcount();
	}
	a[1].setdata(4,5);
	a[2].setdata(6,7);
	for(int i=0;i<3;i++){
		a[i].display();
	}

	return 0;
}
