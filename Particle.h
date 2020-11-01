#ifndef _Particle_H_
#define _Particle_H_

#include "Vector.h"

using namespace std;

class Particle {
  protected:
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

    Particle(double position[3]);
    Particle(double position[3], double velocity[3]);
    Particle(double position[3], double velocity[3], double acceleration[3]);

    // Getters for particle vectors
    Vector getPosition();
    Vector getVelocity();
    Vector getAcceleration();

    // Getters for particle vectors
    void setPosition(Vector position);
    void setVelocity(Vector velocity);
    void setAcceleration(Vector acceleration);

    void update(double time);
};

#endif