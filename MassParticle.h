#ifndef _MassParticle_H_
#define _MassParticle_H_

#include "Vector.h"
#include "Particle.h"
#include <vector>

using namespace std;

class MassParticle : public Particle {
  protected:
    double mass;
  public:
    // Constructor of mass
    MassParticle(double mass); // Mass only property
    MassParticle(double mass, Particle properties); // get properties from particle

    double getMass();
};

#endif