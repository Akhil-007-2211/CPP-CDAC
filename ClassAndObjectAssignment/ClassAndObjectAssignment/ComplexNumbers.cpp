#include<iostream>
using namespace std;

class Complex {
	int real;
	int imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(int real, int imag) {
		Complex::real = real;
		Complex::imag = imag;
	}
	Complex add(Complex c1) {
		Complex result;
		result.real = Complex::real + c1.real;
		result.imag = Complex::imag + c1.imag;
		return result;
	}

	void display() {
		cout << real << "+" << imag << "i" << endl;
	}
};

int main() {
	Complex c1(12, 12);
	Complex c2(12, 13);
	Complex c3;
	c3 = c1.add(c2);
	c3.display();
}