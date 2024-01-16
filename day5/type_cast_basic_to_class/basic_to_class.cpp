#include<iostream>

using namespace std;

class item{
	int code,price,qty;

public:

item(int code,int price,int qty){
	this->code=code;
	this->price=price;
	this->qty= qty;
}

operator int(){ return price*qty;}

};

int main(){
	int bill;
	item i1(100,200,2);
	bill=i1;
	
	cout<<"bill = "<<bill<<endl;
	
	
}
