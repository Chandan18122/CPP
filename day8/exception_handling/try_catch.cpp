#include<iostream>

using namespace std;

int main(){

	int a,b;
	cout<<"Enter a ";
	cin>>a;
	cout<<"Enter b ";
	cin>>b;
	
	try{
		if(b==0) throw 10;
		
		int ans = a/b;
		cout<<"division is "<<ans<<endl;
	}
	catch(int a){
		cout<<"b should not be zero"<<endl;
	}
	cout<<"Have A nice day!!"<<endl;
}
