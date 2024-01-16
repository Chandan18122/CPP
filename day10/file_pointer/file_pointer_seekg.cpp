#include<iostream>
#include<fstream>

using namespace std;
int main(){
	char ch;
	ifstream in;
	in.open("a.txt");
	
	in.seekg(-5,ios::end);
	
	ch=in.get();
	cout<<ch<<endl;
	ch=in.get();
	cout<<ch<<endl;
	ch=in.get();
	cout<<ch<<endl;

}
