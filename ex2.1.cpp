#include <cmath>
#include <iostream>
using namespace std;
const float DEFAULT_RADIUS = 5.0f;
class Circle {
  float radius;

public:
  Circle(float r = DEFAULT_RADIUS) { radius = r; }
  float calc_area() { return M_PI * radius * radius; }
  float calc_circumference() { return 2 * M_PI * radius; }
};
int main() {
  Circle a;
  cout << "Default Circle\nRadius: " << DEFAULT_RADIUS << endl
       << "Area: " << a.calc_area() << endl
       << "Circumference: " << a.calc_circumference() << endl;
  float radius;
  cout << "Radius: ";
  cin >> radius;
  Circle b(radius);
  cout << "Area: " << b.calc_area() << endl
       << "Circumference: " << b.calc_circumference() << endl;
}
