#ifndef _Vector_H_
#define _Vector_H_

using namespace std;

class Vector {
  private:
    // Holds 3 component values of the 3d vector
    double x;
    double y;
    double z;
  public:
    // Can be constructed empty, 2d or 3d
    Vector();
    Vector(double x, double y);
    Vector(double x, double y, double z);

    // Getters for each component
    const double getCompx();
    const double getCompy();
    const double getCompz();

    // Vector assignment
    void operator=(Vector &b);

    // Vector comparison
    bool operator==(Vector &b);

    // Vector operations to return
    Vector operator+(Vector b);
    Vector operator-(Vector b);
    Vector operator*(double b);

    // Vector operations to this vector
    void operator+=(Vector &b);
    void operator-=(Vector &b);
    void operator*=(double b);
    
    double dot(Vector &b);
    Vector cross(Vector &b);

    static Vector cross(Vector &a, Vector &b);

    // Print vector
    void print();


};

#endif