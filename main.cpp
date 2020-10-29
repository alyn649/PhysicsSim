#include <iostream>
#include "Particle.h"
#include "Vector.h"

int main() {
  Particle x;

  Vector a(15, 12, 2);
  Vector b(5, 1);

  a.print();
  b.print();

  a.cross(&b);

  a.print();

  return 0;
}