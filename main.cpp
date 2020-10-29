#include <iostream>
#include "Particle.h"
#include "Vector.h"

int main() {

  // Test some rigid body math
  Vector omega(0, 0, 4); // 15 rad/s
  Vector r_ba(7, 4); // 50m radius
  Vector v_a(10, 1); // Some origin velocity

  // Calculate 
  Vector v_b = v_a + omega.cross(r_ba);

  v_b.print();

  // Initial velocity vertically
  Vector pos;
  Vector vel(0, 100/3.6);
  Vector acc(0, -9.81);

  Particle ball(pos, vel, acc);

  int ticks = 2;

  for(int i = 0; i < ticks; i++) {
    cout << " Tick " << i << ": " << endl;
    ball.getPosition().print();
    ball.getVelocity().print();
    ball.getAcceleration().print();

    ball.update();

  }

  return 0;
}