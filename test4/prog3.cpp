#include <iostream>
#include<deque>
#include<stack>

using namespace std;
int chack(deque<int> &students,deque<int> &sandwiches ){
	stack<int> s(sandwiches);
	while(1){
		int flag = 0;
		
		for(int i = 0;i<students.size();i++){
			if( students.front() != s.top() ){
				int ele = students.front();
				students.pop_front();
				students.push_back(ele);
			}
			else{
			    flag = 1;
			    s.pop();
			    students.pop_front();
			}
		}
		if(!flag) break;	
		if(students.empty()) break;
	}
	return students.size();
}

int main() {
	deque<int> students{1,1,1,0,1,0};
	deque<int> sandwiches{1,1,0,0,0,1};
		
	cout <<"left student = "<<chack(students,sandwiches) << endl; 
	return 0;
}

