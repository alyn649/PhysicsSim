#include "Vector.h"
#include <iostream>

Vector::Vector() {
  this->x = 0;
  this->y = 0;
  this->z = 0;
}

Vector::Vector(double x, double y) {
  this->x = x;
  this->y = y;
  this->z = 0;
}

Vector::Vector(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

// Getters for each component
double Vector::getCompx() {
  return this->x;
}
double Vector::getCompy() {
  return this->y;
}
double Vector::getCompz() {
  return this->z;
}

// Vector operations
void Vector::add(Vector* b) {
  this->x += b->getCompx();
  this->y += b->getCompy();
  this->z += b->getCompz();
}
void Vector::subtract(Vector* b) {
  this->x -= b->getCompx();
  this->y -= b->getCompy();
  this->z -= b->getCompz();
}
void Vector::product(double b) {
  this->x *= b;
  this->y *= b;
  this->z *= b;
}
void Vector::divide(double b) {
  this->x /= b;
  this->y /= b;
  this->z /= b;
}
double Vector::dot(Vector* b) {
  return (this->x * b->getCompx()) + (this->y * b->getCompy()) + (this->z * b->getCompz());
}
void Vector::cross(Vector* b) {
  double buffx = this->y * b->getCompz() - this->z * b->getCompy();
  double buffy = (this->x * b->getCompz() - this->z * b->getCompx()) * (-1);
  double buffz = this->x * b->getCompy() - this->y * b->getCompx();

  this->x = buffx;
  this->y = buffy;
  this->z = buffz;
}

// Print all components
void Vector::print() {
  cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}