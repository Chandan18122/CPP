#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> v2{10,5,30,60};
	set<int> s1{10,20,30,40};
	vector<int> result;
	
	
	for(int i:s1){
		for(int j=0;j<v2.size();j++){
			if(i==v2.at(j)){result.push_back(v2.at(j));}
		}
		
	}
	for(int i=0;i<result.size();i++){
		cout<<result(i)<<","<<endl;
	}

}
