#include<iostream>
using namespace std;

void f1(int a){
	cout<<"a = "<<a <<endl;
}
void f1(float a){
	cout<<"a = "<<a <<endl;
}
int main(){

	f1(10);
	f1(10.5f);
	f1('A');
}
