#include<iostream>
using namespace std;

class Car {
public:
	string name;
	int speed;

	void display() {
		cout << "Car Name:" << name << endl;
		cout << "Car speed:" << speed << endl;
	}
};

int main() {
	Car c1,c2;
	c1.name = "Thar Rox";
	c1.speed = 240;
	c2.name = "Scarpio";
	c2.speed = 200;
	c1.display();
	c2.display();
}