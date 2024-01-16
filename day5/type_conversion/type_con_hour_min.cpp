#include<iostream>

using namespace std;

class Time{

	int hour,min;

public:
Time(){}
Time(int a){
	hour = a/60;
	min = a%60;
}
void display(){
	cout<<hour<<":"<<min<<endl;
}
};

int main(){

	Time t1;
	int x= 100;
	t1=x;
	t1.display();

}
