#include<iostream>
using namespace std;

void add(int a,int b){
	cout<< "sum = "<<a+b<< endl;
}

void add(int a,int b,int c){
	cout<< "sum = "<<a+b+c<< endl;
}

void add(int a,float b){
	cout<< "sum = "<<a+b<< endl;
}

int main(){
	int a = 10,b=20,c=30,d=35.5;
	add(a,b);
	add(a,b,c);
	add(c,d);
	return 0;
}
