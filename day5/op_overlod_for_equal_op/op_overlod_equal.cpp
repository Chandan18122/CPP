#include<iostream>
#include<string.h>
using namespace std;
	

class str{

	char s[100];

public:
str(){}
str(const char a[]){
	strcpy(s,a);
}

int operator==(str obj){
	if(strcmp(s,obj.s)==0) return 1;
	else return 0;
}

};

int main(){
	str s1("hello_chandan"),s2("hi_chandan");
	cout<<(s1==s2);
}
