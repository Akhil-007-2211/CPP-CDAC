#include<iostream>
using namespace std;

class Student {
	int rollno;
	string name;
	int marks;
public:
	void input() {
		cout << "Enter Student rollno:";
		cin>>Student::rollno;
		cout << "Enter Student Name:";
		cin>>Student::name;
		cout << "Enter Student marks:";
		cin>>Student::marks;
	}
public:
	void display() {
		cout << "Name:" << Student::name<<endl;
		cout << "Roll no:" << Student::rollno<<endl;
		cout << "Marks:" << Student::marks<<endl;
	}
};

int main() {
	Student stu[3];
	for (int i = 0; i < 3; i++) {
		cout << "---------------------------------"<<"\nStudent:"<<i+1 << endl;
		 stu[i].input();
	}
	for (int i = 0; i < 3; i++) {
		cout << "-----------------------------------"<<"\nStudent:"<<i+1 << endl;
		stu[i].display();
	}


}