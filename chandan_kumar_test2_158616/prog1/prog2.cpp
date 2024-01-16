#include<iostream>

using namespace std;

class book{
	public:
	int bid,price,stock;
	string title;
	
	public:
	void setbook(){
		cout<<"enter bid,title,price,stock"<<endl;
		cin>>bid;
		cin>>title;
		cin>>price;
		cin>>stock;
	}
	
	
};

int main(){
	book b[2];
	
	for(int i=0;i<2;i++){
		b[i].setbook();
	}
	int id,q,total;
	cout<<"enter bid, and qunt";
	cin>>id;
	cin>>q;
	
	for(int i=0;i<2;i++){
		if(b[i].bid == id){
			if(b[i].stock >= q){
				cout<<"total = "<<q*b[i].price<<endl;
			}
		}
	}
	
}
