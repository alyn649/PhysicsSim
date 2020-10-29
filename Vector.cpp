#include "Vector.h"
#include <iostream>

// Construct empty
Vector::Vector() {
  this->x = 0;
  this->y = 0;
  this->z = 0;
}

// Construct with 2d input
Vector::Vector(double x, double y) {
  this->x = x;
  this->y = y;
  this->z = 0;
}

// Construct with 3d input
Vector::Vector(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

// Getters for each component
const double Vector::getCompx() {
  return this->x;
}
const double Vector::getCompy() {
  return this->y;
}
const double Vector::getCompz() {
  return this->z;
}

// Vector operations on this vector
// Add a vector
void Vector::operator+=(Vector &b) {
  this->x += b.getCompx();
  this->y += b.getCompy();
  this->z += b.getCompz();
}
// Subtract a vector
void Vector::operator-=(Vector &b) {
  this->x -= b.getCompx();
  this->y -= b.getCompy();
  this->z -= b.getCompz();
}
// Times a scalar
void Vector::operator*=(double b) {
  this->x *= b;
  this->y *= b;
  this->z *= b;
}

// Vector operations to return
// Add a vector
Vector Vector::operator+(Vector b) {
  Vector out(this->x + b.getCompx(), this->y + b.getCompy(), this->z + b.getCompz());
  return out;
}
// Subtract a vector
Vector Vector::operator-(Vector b) {
  Vector out(this->x - b.getCompx(), this->y - b.getCompy(), this->z - b.getCompz());
  return out;
}
// Times a scalar
Vector Vector::operator*(double b) {
  Vector out(this->x * b, this->y * b, this->z * b);
  return out;
}

// Return the dot product of this and another vector
double Vector::dot(Vector &b) {
  return (this->x * b.getCompx()) + (this->y * b.getCompy()) + (this->z * b.getCompz());
}

// Return the cross product of this and another vector
Vector Vector::cross(Vector &b) {
  double buffx = this->y * b.getCompz() - this->z * b.getCompy();
  double buffy = (this->x * b.getCompz() - this->z * b.getCompx()) * (-1);
  double buffz = this->x * b.getCompy() - this->y * b.getCompx();

  Vector out(buffx, buffy, buffz);
  return out;
}

// Set this vector to another
void Vector::operator=(Vector &b) {
  this->x = b.getCompx();
  this->y = b.getCompy();
  this->z = b.getCompz();
}

// Print all components
void Vector::print() {
  cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}