g#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int line =0,word=0,space=0,alpha=0;
	char ch;
	ifstream i1;
	i1.open("chandan.txt");
	ch=i1.get();
	while(i1){
		if(ch=='\n') line++;
		//if((ch>='A' && ch>='Z') ||(ch>='a' && ch>='z'))
			//alpha++;
		if(ch==' ') space++;
		
		if(iswalpha(ch))
			alpha++;
		ch=i1.get();
	}
	cout<<"line = "<<line;
	cout<<"word = "<<word;
	cout<<"space = "<<space;
	cout<<"alpha = "<<alpha;
	i1.close();
}
