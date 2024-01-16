#include<iostream>
#include<string.h>

using namespace std;

class account{
	public:
	string cname;
	int caccount;
	char acctype;
	int balance=0;
	void setdata(){
		cout<<"Enter costomer name : ";
		cin>>cname;
		cout<<"Enter costomer account no. : ";
		cin>>caccount;
		cout<<"Enter account type for saving s and current c : ";
		cin>>acctype;
	}
	void addbalance(){
		int dblance;
		cout<<"Accept the deposigate : ";
		cin>>dblance;
		balance +=  dblance;
		display();
	}

	void display(){
		cout<<"Balance = "<<balance<<endl;
	}
	void addinterest(){
		if(acctype == 's'){
			int interest = (balance*5*1)/100;
			balance += interest;
		}
		display();
	}
	
	void withdraw(){
		
		int dblance;
		cout<<"withdrawal amount : ";
		cin>>dblance;
		balance -=  dblance;
		display();
	}
	void checkblance(){
		if(acctype == 'c'){
			if(balance < 10001){
			int fine = 100;
			balance -= fine;}
		}
	display();
	
	}
	
};
class cur_acc:public account{
	int balance ;
	char acctype;
	public:
	void addinterest(){
		if(acctype == 's'){
			int interest = (balance*5*1)/100;
			balance += interest;
		}
	
	}
};
class sev_acc:public account{
	int balance ;
	char acctype;
	public:
	void checkblance(){
		if(acctype == 'c'){
			if(balance < 10001){
			int fine = 100;
			 balance -= fine;}
		}
	
	}
	
};

int main(){
	account a1;
	a1.setdata();
	a1.addbalance();
	
	a1.addinterest();
	
	a1.withdraw();
	a1.checkblance();
	
}


