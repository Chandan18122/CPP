#include<iostream>

using namespace std;

class item1{
	int code,price,qty;

public:

item1(int code,int price,int qty){
	this->code=code;
	this->price=price;
	this->qty= qty;
}

int getcode(){ return code;}

int getprice(){ return price;}

int getqty(){ return qty;}

};

class item2{
	int code,total;
public:
item2(item1 temp){
	this->code=temp.getcode();
	this->total=temp.getprice() * temp.getqty();
}
void display(){
	cout<<code<<"\t"<<total<<endl;
}
};
int main(){

	item1 i1(100,200,2);
	item2 i2=i1;
	
	i2.display();

	
}
