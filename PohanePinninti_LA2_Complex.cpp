#include <iostream>
using namespace std;

class Complex {

private:
	double real;
	double imaginary;
public:
	Complex(float xyz = 10.0, float abc = 10.0);
	void add(Complex);
	void subtract(Complex);
	void display();
	
};

Complex::Complex(float xyz, float abc) {
	real = xyz;
	imaginary = abc;
}

void Complex::add(Complex x) {
	real += x.real;
	imaginary += x.imaginary;
}

void Complex::subtract(Complex x) {
	real -= x.real;
	imaginary	-= x.imaginary;
}

void Complex::display()
{
	cout << real << " + " << imaginary << "j" << endl;
}

int main() {
	Complex a(5, 5);
	Complex b;
	
	cout << "Initial complex numbers: " << endl;
	a.display();
	b.display();

	cout << endl;
	
	cout << "Complex A + Complex B: " << endl;
	a.add(b);
	a.display();
	
	cout << endl;

	cout << "Complex B - Complex A: " << endl;
	b.subtract(a);
	b.display();

	return 0;
}
