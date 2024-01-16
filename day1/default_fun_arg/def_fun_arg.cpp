#include<iostream>

using namespace std;

void cubevolume(int l,int b, int h=1){
	cout<< "volume : "<<l*b*h<<"\n";
}
int main(){
	cubevolume(10, 20);

	return 0;
}
