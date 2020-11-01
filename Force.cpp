#include "Force.h"

Force::Force() {
  this->force = {0, 0, 0};
}

Force::Force(Vector force) {
  this->force = force;
}

Vector Force::getForce() {
  return this->force;
}

void Force::setForce(Vector force) {
  this->force = force;
}

void Force::setForce(double force[3]) {
  this->force = force;
}