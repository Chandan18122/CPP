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
	int costumber;
	cout<<"Enter the no. of costumber : ";
	cin>>costumber;
	shopping s[costumber];
	int ch;
	cout<<"Choise 1 for add item, 2 for remave, 3 for calcuat bill, -1 for chack out."<<endl;
	for(int i=0;i<costumber;i++){
		s[i].setdata();
		while(true){
			ch = 0;
			cout<<"Enter the choise : ";
			cin>>ch;
			if(ch == -1) break;
			switch(ch){
				case 1:
					s[i].add_item();
				break;
				case 2:
					s[i].remove_item();
				break;
				case 3:
					s[i].display();
				break;
				default:
					cout<<"woring choise"<<endl;
				break;
			}
		}
	}

	for(int i=0;i<costumber;i++){
		s[i].display();
	}
	return 0;
}

