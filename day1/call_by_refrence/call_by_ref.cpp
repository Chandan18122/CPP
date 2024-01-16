#include<iostream>
using namespace std;

void f1(int &x){
	x = x + 1;
}
int main()
{
	int a = 10;
	cout <<"a = "<<a <<"\n";
	int &x = a; 
	f1(a);
	cout <<"a = "<<a<<"\n";
	return 0;
}
