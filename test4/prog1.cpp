#include <iostream>

using namespace std;

class matrix
{
    public:
	int m[3][3];
	
public:
matrix(){}

friend void operator<<(ostream &output,matrix A);
friend void operator>>(istream &input,matrix &A);
friend void operator==(matrix &A);

};

void operator<<(ostream &output, matrix A)
{	
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<A.m[i][j]<<"\t";
            }
            cout<<endl;
        }
	
}

void operator>>(istream &input, matrix &A)
{	
	 for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>A.m[i][j];
            }
        }
}
int operator==(matrix &A)
{	
	 for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(m[i][j]!=A.m[i][j]){return 0;}
            }
        }
	return 1;
}

int main()
{
    matrix m1,m2;
    
    cin>>m1;
    cout<<m1;
	cin>>m2;
	cout<<m2
	if(m1==m2){cout<<"equal"<<endl;}
	else{cout<<"not equal"<<endl;}
    return 0;
}

