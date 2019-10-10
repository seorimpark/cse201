#include <iostream>
#include <cmath>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex() {
	imaginary=0.0;
	real=0.0;
	};
	
    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary) {
	this->real = real;
	this->imaginary = imaginary;
	};

    ~Complex() {
	std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
	};

    double getReal() {
	return real;
	};             // get the real part of the number

    double getImaginary() {
	return imaginary;
	};        // get the imaginary part of the number

    void setReal(double re) {
	real = re;
	};      // set the value of the real part

    void setImaginary(double im) {
	imaginary = im; // set the value of the imaginary part
	};

    double magnitude() {
	return sqrt(pow(real,2)+pow(imaginary,2));
	};           // computes the distance from the complex origin

/*
   modifies the number so its magnitude becomes 1
   but it stays in the same direction from the complex origin, if possible. In other
   words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
*/
    void normalize() {
	double re = real;
	double im = imaginary;
	double ma = magnitude();
	real = re/ma;
	imaginary = im/ma;
	};

};

int main() {
  Complex c1;
  Complex c2 = Complex(3,4);

  c1.normalize();

  c1.setReal(c2.getReal());
  c1.setImaginary(c2.getImaginary());

  std::cout << "c1 magnitude: " << c1.magnitude() << std::endl;
  c1.normalize();

  std::cout << "c1 is: " << c1.getReal() <<
    " + " << c1.getImaginary() << " * i" << std::endl;
  std::cout << "c1 magnitude:" << c1.magnitude() << std::endl;
}
