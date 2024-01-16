#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){
	
	ofstream o1;
	o1.open("chandan.txt");
	string name;
	
	cout<<"Enter the name = ";
	cin>>name;
	o1<<name;
	o1.close();
}
