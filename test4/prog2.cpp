#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
private:
    int x, y; 
    int width, height;

public:
  
    Rectangle(int x=0, int y=0, int w=1, int h=1) {
        this->x = x;
        this->y = y;
        this->width = w;
        this->height = h;
    }

    int getArea() {
        return width * height;
    }

    int getPerimeter() {
        return 2 * (width + height);
    }

    bool test(int x, int y) {
        int left = this->x - width / 2;
        int right = this->x + width / 2;
        int top = this->y + height / 2;
        int bottom = this->y - height / 2;

        return (x >= left && x <= right && y >= bottom && y <= top);
    }
};

int main() {
    
    Rectangle r1;

    Rectangle r2(2, 3, 4, 5);

    cout << "r1 area: " << r1.getArea() << endl;
    cout << "r2 area: " << r2.getArea() << endl;

    cout << "r1 perimeter: " << r1.getPerimeter() << endl;
    cout << "r2 perimeter: " << r2.getPerimeter() << endl;
	cout<<"Enter codearenet for test" <<endl;
	int a,b;
	cin>>a;
	cin>>b;
	if(r1.test(a, b)){
	    	cout << "("<<a<<", "<<b<<") r1: " <<" inside" << endl;
	}
	else{
		cout << "("<<a<<", "<<b<<") r1: " <<" not inside" << endl;
	}

    return 0;
}

