#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

class complexNumber {
  double Real;
  double Imaginary;

 public:
  complexNumber(double aRe = 0, double aIm = 0);
  complexNumber(const complexNumber&);

  void Set(double aRe, double aIm = 0);

  double abs();

  friend istream& operator>>(istream&, complexNumber&);
  friend complexNumber operator+(const double&, const complexNumber&);
  friend ostream& operator<<(ostream&, complexNumber&);
  friend complexNumber operator-(const double&, const complexNumber&);
  friend complexNumber operator*(const double&, const complexNumber&);

  operator double();

  complexNumber operator+(const complexNumber&);
  complexNumber operator-(const complexNumber&);
  complexNumber operator+(const double&);
  complexNumber operator-(const double&);
  complexNumber operator*(const complexNumber&);
  complexNumber operator*(const double&);
  complexNumber operator/(const double&);
  complexNumber& operator+=(const complexNumber&);
  complexNumber& operator-=(const complexNumber&);
  complexNumber& operator*=(const complexNumber&);
  complexNumber& operator+=(const double&);
  complexNumber& operator-=(const double&);
  complexNumber& operator*=(const double&);
  complexNumber& operator/=(const double&);
  complexNumber& operator=(const complexNumber&);
  complexNumber& operator=(const double&);

  ~complexNumber();
};
#endif