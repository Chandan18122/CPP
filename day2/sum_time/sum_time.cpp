#include<iostream>
using namespace std;

class Time{

	int hr;
	int min;
	int sec;

public:
void set(int h, int m, int s){
	hr = h;
	min = m;
	sec = s;

}

void sum(Time A, Time B){
	sec = A.sec+B.sec;
	min = sec/60;
	sec = sec%60;

	min = min + A.min+B.min;
	hr = min/60;
	min = min%60;
	
	hr = hr+A.hr+B.hr;
}
void display(){
	cout<<hr<<":"<<min<<":"<<sec<<endl;
}
};

int main(){
	Time t1,t2,t3;
	t1.set(5,50,50);
	t2.set(5,40,40);
	t3.sum(t1,t2);
	t1.display();
	t2.display();
	t3.display();	
	return 0;
}
