#include <iostream>
#include "Particle.h"
#include "Vector.h"
#include "MassParticle.h"

int main() {

  /*
  // Test some rigid body math
  Vector omega(0, 0, 4); // 15 rad/s
  Vector r_ba(7, 4); // 50m radius
  Vector v_a(10, 1); // Some origin velocity

  // Calculate 
  Vector v_b = v_a + omega.cross(r_ba);

  v_b.print();

  */

  // Initial velocity vertically
  Vector pos;
  Vector vel(0, 100/3.6);
  Vector acc(0, -9.81);

  Particle ball(pos, vel, acc);

  /*
  for(int i = 0; i < 5; i++) {
    cout << " Tick " << i << ": " << endl;
    ball.getPosition().print();
    ball.getVelocity().print();
    ball.getAcceleration().print();

    ball.update();
  }
  */

  // Use double assingment
  pos = {0, 1, 0};
  vel = {5, 0, 0};
  acc = {0, 0, 0};

  Particle swingBall(pos, vel, acc);

  // Circular motion by manually changing acceleration
  for(int i = 0; i < 0; i++) {
    acc = swingBall.getPosition()*(-1);
    swingBall.setAcceleration(acc);

    swingBall.getPosition().print2d();

    swingBall.update(0.1);
  }

  Vector planet(10, 5);

  pos = {0, 0, 0};
  vel = {-4, 0, 0};
  acc = {0, 0, 0};

  Particle rocket(pos, vel, acc);

  Vector r_pr;

  for(int i = 0; i < 50; i++) {
    r_pr = (planet - rocket.getPosition());
    acc = r_pr.unit() * (20/r_pr.magnitude());
    rocket.setAcceleration(acc);

    rocket.getPosition().print2d();

    rocket.update(0.5);
  }


  /*

  // Particle with mass
  MassParticle massBall(15, ball);

  massBall.getPosition().print();
  massBall.getVelocity().print();
  massBall.getAcceleration().print();

  ball.update();

  cout << massBall.getMass() << "kg" << endl;

  */

  return 0;
}