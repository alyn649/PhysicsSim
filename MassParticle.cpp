#include "MassParticle.h"
#include "Particle.h"

 // Mass only property
MassParticle::MassParticle(double mass) {
  this->mass = mass;
}

 // get properties from particle
MassParticle::MassParticle(double mass, Particle properties) {
  this->mass = mass;
  this->position = properties.getPosition();
  this->velocity = properties.getVelocity();
  this->acceleration = properties.getAcceleration();
}

double MassParticle::getMass() {
  return mass;
}
