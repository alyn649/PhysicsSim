#include <iostream>
#include "Particle.h"
#include "Vector.h"

int main() {
  Vector pos;
  Vector vel(0, 100/3.6);
  Vector acc(0, -9.81);

  Particle ball(pos, vel, acc);

  int ticks = 10;

  for(int i = 0; i < ticks; i++) {
    cout << " Tick " << i << ": " << endl;
    ball.getPosition().print();
    ball.getVelocity().print();
    ball.getAcceleration().print();

    ball.update();

  }

  return 0;
}