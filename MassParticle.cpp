#include "MassParticle.h"
#include "Particle.h"

 // Mass only property
MassParticle::MassParticle(double mass) {
  this->mass = mass;
  this->forces = {};
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

void MassParticle::fma() {
  this->acceleration = {0, 0, 0};

  for(unsigned int i = 0; i < this->forces.size(); i++) {
    this->acceleration += this->forces[i]->getForce() * (1/this->mass); 
  }

}

void MassParticle::addForce(Force* force) {
  
}
