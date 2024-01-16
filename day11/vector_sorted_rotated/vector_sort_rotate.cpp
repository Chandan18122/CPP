#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	int count=0;
	for(int i=0;i<v.size();i++){
		if(i+1==v.size()){break;}
		if(v.at(0)<v.at(v.size()-1)){count++;}
		if(v.at(i)>v.at(i+1)){count++;}
	}
	if(count<2){cout<<"sorted vector"<<endl;}
	else{cout<<"unsorted vector "<<endl;}
}
