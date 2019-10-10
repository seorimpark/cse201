#include <iostream>
#include <cmath>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex() {
	imaginary=0;
	real=0;
	};
	
    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary) {
	this->real = real;
	this->imaginary = imaginary;
	};

    ~Complex() {
	std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
	};

};

int main() {
	Complex c1;
	Complex c2= Complex(3, 0);
	Complex c3= Complex(1, 2);
}
