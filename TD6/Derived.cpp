#include <iostream>
#include "Derived.hpp"

  // Make sure you understand how this contructor works:
  Derived::Derived(int a, int b, double c, double d)
    : Base(a, b, c)
  {
    this->w = d;
  }
