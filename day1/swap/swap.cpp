#include<iostream>
using namespace std;

void f1(int &x, int &y){
	int temp = x;	
	x = y;
	y = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	cout <<"a = "<<a <<"\n";
	cout <<"b = "<<b <<"\n";
	int &x = a; 
	int &y = b;
	f1(a,b);
	cout <<"a = "<<a <<"\n";
	cout <<"b = "<<b <<"\n";
	return 0;
}
