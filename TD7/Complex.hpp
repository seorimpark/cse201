#pragma once
#include <iostream>
template <typename T> class Complex {
public:
	Complex(T real, T imaginary) {this->real=real;this->imaginary; }
	~Complex() {}

	Complex operator+(const Complex& o) {return Complex(real + o.real, imaginary + o.imaginary);}
	Complex operator-(const Complex& o) {return Complex(real - o.real, imaginary - o.imaginary);}
	Complex operator*(const Complex& o) {return Complex(real * o.real - imaginary * o.imaginary, imaginary * o.real + real * o.imaginary);}
	
void print() {
	if (imaginary ==0)
		std::cout<<real<<std::endl;
	else if (imaginary >0)
		std::cout<<real<<"+"<<imaginary<<"*i"<<std::endl;
	else
		std::cout<<real<<imaginary<<"*i"<<std::endl;
	}

private:
T real;
T imaginary;
};
