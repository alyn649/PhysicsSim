#include "Particle.h"

// Able to construct with varying properties
Particle::Particle() {
  Vector empty;
  this->position = empty;
  this->velocity = empty;
  this->acceleration = empty;
}
Particle::Particle(Vector position) {
  Vector empty = Vector();
  this->position = position;
  this->velocity = empty;
  this->acceleration = empty;
}
Particle::Particle(Vector position, Vector velocity) {
  Vector empty = Vector();
  this->position = position;
  this->velocity = velocity;
  this->acceleration = empty;
}
Particle::Particle(Vector position, Vector velocity, Vector acceleration) {
  this->position = position;
  this->velocity = velocity;
  this->acceleration = acceleration;
}

// Getters for particle properties
Vector Particle::getPosition() {
  return this->position;
}
Vector Particle::getVelocity() {
  return this->velocity;
}
Vector Particle::getAcceleration() {
  return this->acceleration;
}

// Set properties
void Particle::setPosition(Vector position) {
  this->position = position;
}
void Particle::setVelocity(Vector velocity) {
  this->velocity = velocity;
}
void Particle::setAcceleration(Vector acceleration) {
  this->acceleration = acceleration;
}

// Updates the properties of the particle
void Particle::update(double time) {
  this->velocity += this->acceleration*time;
  this->position += this->velocity*time;
}