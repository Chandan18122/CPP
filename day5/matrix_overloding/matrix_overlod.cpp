#include<iostream>

using namespace std;

class matrix
{
	int n=2;
	int m=2;
	int a[2][2];

public:
void setdata()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"Enter value a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}

void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<"|";
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"|"<<endl;
	}
}

matrix operator+(matrix m2){
	matrix temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp.a[i][j]=a[i][j]+m2.a[i][j];
		}
	}
	return temp;
}
matrix operator*(matrix m2){
	matrix temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp.a[i][j]=0;
			for(int k=0;k<m;k++)
			{
				temp.a[i][j]+=a[i][j]*m2.a[i][j];
			}
		}
	}
	return temp;
}
};

int main(){
	matrix m1,m2,m3,m4;
	
	m1.setdata();
	m2.setdata();

	m3=m1+m2;
	m4=m1*m2;
	cout<<"sum fo two matrix\n";
	m3.display();
	cout<<"multipleaction of 2*2 matrix\n"; 
	m4.display();

}
