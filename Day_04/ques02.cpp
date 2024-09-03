#include <cstdlib>
#include <iostream>

class Complex {
private:
  int real;
  int imag;

public:
  Complex(int r = 0, int i = 0) : real(r), imag(i) {}

  Complex operator+(const Complex &other) const {
    return Complex(real + other.real, imag + other.imag);
  }

  Complex operator-(const Complex &other) const {
    return Complex(real - other.real, imag - other.imag);
  }

  friend std::ostream &operator<<(std::ostream &os, const Complex &c) {
    os << c.real;
    if (c.imag >= 0) {
      os << " + " << c.imag << "i";
    } else {
      os << " - " << -c.imag << "i";
    }
    return os;
  }
};

int main() {
  Complex c1(3, 4);
  Complex c2(1, 2);

  Complex sum = c1 + c2;
  Complex difference = c1 - c2;

  std::cout << "Complex Number 1: " << c1 << std::endl;
  std::cout << "Complex Number 2: " << c2 << std::endl;
  std::cout << "Sum: " << sum << std::endl;
  std::cout << "Difference: " << difference << std::endl;

  return EXIT_SUCCESS;
}
