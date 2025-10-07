#include<iostream>
using namespace std;

class EmploySalary {
	int id;
	string name;
	double salary;
public:
	EmploySalary(int id, string name, double salary) {
		EmploySalary::id = id;
		EmploySalary::name = name;
		EmploySalary::salary = salary;
	}

	void display() {
		cout << "Employ id:" << id << endl;
		cout << "Employ name:" << name << endl;
		cout << "Employ salary:" << salary << endl;
	}
};

int main() {
	EmploySalary e1(11,"Akhil",40000),e2(22,"SivaSree",50000);
	e1.display();
	cout << "-------------------"<<endl;
	e2.display();
}