
using namespace std;

class Particle {
  private:
    int locationx;
    int locationy;

    int velx;
    int vely;
  public:
    Particle();

    int getLocationx();
    int getLocationy();

    void update();
};