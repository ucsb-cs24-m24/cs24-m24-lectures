#include <iostream>
using namespace std;
class Complex {
private:
  double real;
  double imag;

public:
  Complex(int re = 0, int im = 0) : real(re), imag(im){};
  double getReal() const { return real; }
  double getImag() const { return imag; }
  void print() const;
  double magnitute() const;
  void conjugate();

  Complex add(Complex other) const;
};
Complex Complex::add(Complex other) const {
  return Complex(real + other.real, imag + other.imag);
}

Complex add(Complex a, Complex b) {
  return Complex(a.getReal() + b.getReal(), a.getImag() + b.getImag());
}

void Complex::print() const { cout << real << " + " << imag << "i"; }

Complex operator+(Complex a, Complex b) {
  return Complex(a.getReal() + b.getReal(), a.getImag() + b.getImag());
}

int main() {
  Complex x(1, 2), y(3, 4);
  Complex w(5, 6);
  Complex z = x.add(y);
  add(x, y).print();
  z.print();

  (x + y).print();
}