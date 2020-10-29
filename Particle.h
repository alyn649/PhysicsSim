#ifndef _Particle_H_
#define _Particle_H_

#include "Vector.h"

using namespace std;

class Particle {
  private:
    // Stores properties of particle
    Vector position;
    Vector velocity;
    Vector acceleration;
  public:
    // Constructors allowing levels of setup
    Particle(); // Still at origin
    Particle(Vector position); // Still at postion
    Particle(Vector position, Vector velocity); // constant vel from starting point
    Particle(Vector position, Vector velocity, Vector acceleration); // all

    // Getters for particle vectors
    Vector getPosition();
    Vector getVelocity();
    Vector getAcceleration();

    void update();
};

#endif