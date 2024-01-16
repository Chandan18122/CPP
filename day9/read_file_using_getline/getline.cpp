#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	string str;
	ifstream i1;
	i1.open("chandan.txt");
	
	while(i1){
		i1>>str;
		cout<<str;
	}
	
}
