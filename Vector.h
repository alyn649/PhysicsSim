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
    double getCompx();
    double getCompy();
    double getCompz();

    // Vector operations
    void add(Vector* b);
    void subtract(Vector* b);
    void product(double b);
    void divide(double b);
    
    double dot(Vector* b);
    void cross(Vector* b);

    // Print vector
    void print();


};