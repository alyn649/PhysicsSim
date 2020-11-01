#include <iostream>
#include "Particle.h"
#include "Vector.h"
#include "MassParticle.h"
#include "Force.h"
#include <fstream>
#include <math.h>

int main() {
  Force* g = new Force({0, -9.81, 0});

  MassParticle ball(12.5);
  
  Vector vel(8, 25);
  ball.setVelocity(vel);

  ball.

  return 0;
}

void biPlanetOrbit() {
  Vector planet(10, 5);
  Vector planet2(100, 20);

  Particle rocket({0, 0, 0}, {0, 10, 0});

  Vector r_pr;
  Vector r_p2r;

  int ticks = 2000;

  Vector acc;

  ofstream output;
  output.open("result.txt");

// Working orbit
  for(int i = 0; i < ticks; i++) {
    r_pr = (planet - rocket.getPosition());
    r_p2r = (planet2 - rocket.getPosition());

    acc = r_pr.unit() * (650 / pow(r_pr.magnitude(), 2));
    acc += r_p2r.unit() * (650 / pow(r_p2r.magnitude(), 2));

    rocket.setAcceleration(acc);

    if(i%(ticks/1000) == 0) {
      output << rocket.getPosition().getCompx() << ",";
      output << rocket.getPosition().getCompy() << endl;
    }

    rocket.update(0.1);
  }
  
  output.close();
}