#include<iostream>
using namespace std;

class Rectangle {
	double length;
	double breadth;

public :
		double area(double length, double breadth) {
		Rectangle::length = length;
		Rectangle::breadth = breadth;

		return length * breadth;
	}

public:double perimeter(double length, double breadth) {
		Rectangle::length = length;
		Rectangle::breadth = breadth;

		return 2 * (length + breadth);
	}
};

int main() {
	Rectangle r1;
	cout<<"Area of the rectangle:" << r1.area(22.34, 17.14)<<endl;
	cout<<"Perimeter of the Rectangle:" << r1.perimeter(17.22, 13.23)<<endl;
}