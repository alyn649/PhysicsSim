#include "Particle.h"

Particle::Particle() {
  this->locationy = 0;
  this->locationx = 0;

  this->velx = 2;
  this->vely = 1;
}

int Particle::getLocationx() {
  return this->locationx;
}

int Particle::getLocationy() {
  return this->locationy;
}

void Particle::update() {
  this->locationy += vely;
  this->locationx += velx;
}