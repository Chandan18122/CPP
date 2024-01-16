#include<iostream>
using namespace std;

class shopping{
	char name[20];

	int itemcode[30];
	int itemprice[30];

	int count = 0;
	int totalbill;
public:	
void setdata(){
	cout<<"Enter the custemer name : ";
	cin>>name;
}

void add_item(){
	cout<<"Enter the item code : ";
	cin>>itemcode[count];
	cout<<"Enter the item prise : ";
	cin>>itemprice[count];
	count++;
 
}

void remove_item(){
	int code;
	cout<<"Enter the item code : ";
	cin>>code;
	for(int i=0;i<count; i++){
		if(itemcode[i] == code){
			itemprice[i] = 0;
			break;
		}
	}
}

void calcuate_bill(){
	totalbill = 0;
	for(int i=0; i<count; i++){
		totalbill += itemprice[i];
	}
}

void display(){
	cout<<name<<endl;
	for(int i=0;i <count;i++){
		cout<<itemcode[i] <<" = " <<itemprice[i]<<endl;
	}
	calcuate_bill();
	cout<<"total bill : "<<totalbill<<endl;

}
	
};

int main(){
	shopping s1;
	int ch;
	cout<<"Choise 1 for set, 2 for add item, 3 for remave, 4 for calcuat bill, -1 for chack out."<<endl;
	while(true){
		cout<<"Enter the choise : ";
		cin>>ch;
		if(ch == -1) break;
		switch(ch){
			case 1:
				s1.setdata();
			break;
			case 2:
				s1.add_item();
			break;
			case 3:
				s1.remove_item();
			break;
			case 4:
				s1.display();
			break;
			default:
				cout<<"woring choise"<<endl;
			break;
		}
	}
	return 0;
}

