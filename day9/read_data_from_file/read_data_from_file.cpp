#include<iostream>
#include<fstream>

using namespace std;

int main(){

	char ch;
	ifstream i1;
	i1.open("chandan.txt");
	ch=i1.get();
	while(i1){
		cout<<ch;
		ch=i1.get();
	}
	i1.close();
}
