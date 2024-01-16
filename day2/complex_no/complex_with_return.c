#include<iostream>
using namespace std;

class complex {
	int x;
	int y;
	
public:

void set(int a,int b){
	x= a;
	y =b;
}
void display(){
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}

complex sum(complex A, complex B);
};
complex::sum(complex A, complex B){
	x=A.x +B.x;
	y=A.y +B.y;
}
int main(){
	complex A,B,c;
	A.set(10,20);
	B.set(10,20);
	c.sum(A,B);
	c.display();
	return 0;
}
