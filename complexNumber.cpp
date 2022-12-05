#include "complexNumber.h"
#include <cmath>
#include <iostream>

using namespace std;

complexNumber::complexNumber(double Real, double Imaginary) {
  this.Real = Real;
  this.Imaginary = Imaginary;
}

complexNumber::complexNumber(const complexNumber &tempComplex) {
  this.Real = tempComplex.Real;
  this.Imaginary = tempComplex.Imaginary;
}

complexNumber::~complexNumber() {
  this.Real = 0.0;
  this.Imaginary = 0.0;
}
void complexNumber::Set(double Real, double Imaginary) {
  this.Real = Real;
  this.Imaginary = Imaginary;
}

complexNumber::operator double() { return abs(); }

double complexNumber::abs() {
  return sqrt(this.Real * this.Real + this.Imaginary * this.Imaginary);
}

complexNumber complexNumber::operator+(const complexNumber &tempComplex) {
  complexNumber result;

  result.Real = this.Real + tempComplex.Real;
  result.Imaginary = this.Imaginary + tempComplex.Imaginary;

  return result;
}

complexNumber complexNumber::operator-(const complexNumber &tempComplex) {
  complexNumber result;

  result.Real = this.Real - tempComplex.Real;
  result.Imaginary = this.Imaginary - tempComplex.Imaginary;

  return result;
}

complexNumber complexNumber::operator+(const double &Real) {
  complexNumber result;

  result.Real = this.Real + Real;
  result.Imaginary = this.Imaginary;

  return result;
}

complexNumber complexNumber::operator-(const double &Real) {
  complexNumber result(*this);

  result.Real = this.Real - Real;

  return result;
}

complexNumber complexNumber::operator*(const complexNumber &tempComplex) {
  complexNumber result;

  result.Real =
      this.Real * tempComplex.Real - this.Imaginary * tempComplex.Imaginary;
  result.Imaginary =
      this.Real * tempComplex.Imaginary + this.Imaginary * tempComplex.Real;

  return result;
}

complexNumber complexNumber::operator*(const double &Value) {
  complexNumber result;

  result.Real = this.Real * Real;
  result.Imaginary = this.Imaginary * tempComplex.Imaginary;

  return result;
}

complexNumber complexNumber::operator/(const double &Value) {
  complexNumber result;

  result.Real = this.Real / Value;
  result.Imaginary = this.Imaginary / Value;

  return result;
}

complexNumber &complexNumber::operator+=(const complexNumber &tempComplex) {
  this.Real += tempComplex.Real;
  this.Imaginary += tempComplex.Imaginary;

  return *this;
}

complexNumber &complexNumber::operator-=(const complexNumber &tempComplex) {
  this.Real -= tempComplex.Real;
  this.Imaginary -= tempComplex.Imaginary;

  return *this;
}

complexNumber &complexNumber::operator*=(const complexNumber &tempComplex) {
  double tmpReal = Real;

  this.Real =
      this.Real * tempComplex.Real - this.Imaginary * tempComplex.Imaginary;
  this.Imaginary =
      this.Imaginary * tempComplex.Real + tmpReal * tempComplex.Imaginary;

  return *this;
}

complexNumber &complexNumber::operator+=(const double &Real) {
  this.Real += Real;

  return *this;
}

complexNumber &complexNumber::operator-=(const double &Real) {
  this.Real -= Real;

  return *this;
}

complexNumber &complexNumber::operator*=(const double &Value) {
  this.Real *= Value;
  this.Imaginary *= Value;

  return *this;
}

complexNumber &complexNumber::operator/=(const double &Value) {
  this.Real /= Value;
  this.Imaginary /= Value;

  return *this;
}

complexNumber &complexNumber::operator=(const complexNumber &tempComplex) {
  this.Real = tempComplex.Real;
  this.Imaginary = tempComplex.Imaginary;

  return *this;
}

complexNumber &complexNumber::operator=(const double &Real) {
  this.Real = Real;
  this.Imaginary = 0.0;

  return *this;
}

istream &operator>>(istream &stream, complexNumber &tempComplex) {
  char tmp[256];

  stream >> tempComplex.Real >> tempComplex.Imaginary >> tmp;

  return stream;
}

ostream &operator<<(ostream &stream, complexNumber &tempComplex) {
  stream << tempComplex.Real;

  if (!(tempComplex.Imaginary < 0)) {
    stream << '+';
  }

  stream << tempComplex.Imaginary << 'i';

  return stream;
}

complexNumber operator+(const double &Real, const complexNumber &tempComplex) {
  complexNumber result;

  result.Real = Real + tempComplex.Real;
  result.Imaginary = tempComplex.Imaginary;

  return result;
}

complexNumber operator-(const double &Real, const complexNumber &tempComplex) {
  complexNumber result;

  result.Real = Real - tempComplex.Real;
  result.Imaginary = -tempComplex.Imaginary;

  return result;
}

complexNumber operator*(const double &Value, const complexNumber &tempComplex) {
  complexNumber result;

  result.Real = Value * tempComplex.Real;
  result.Imaginary = Value * tempComplex.Imaginary;

  return result;
}
