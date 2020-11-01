#ifndef _Force_H_
#define _Force_H_

#include "Vector.h"

class Force {
  protected:
    Vector force;
  public:
    Force();
    Force(Vector force);

    Vector getForce();

    void setForce(Vector force);
    void setForce(double force[3]);
};

#endif