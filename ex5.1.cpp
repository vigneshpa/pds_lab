#include <iostream>
using namespace std;
class vehicle
{
public:
  int no_of_wheels, no_of_gears;
  string name;
  virtual void display(){};
  void print_details()
  {
    cout << "No_of_Wheels: " << no_of_wheels << endl
         << "No_of_gears: " << no_of_gears << endl
         << "Name : " << name << endl;
  };
  void read_details()
  {

    cout << "No_of_Wheels: ";
    cin >> no_of_wheels;
    cout << "No_of_gears: ";
    cin >> no_of_gears;
    cout << "Name : ";
    cin >> name;
  }
};

class light_vehicle : public vehicle
{
public:
  static const char typ = 'L';
  void display()
  {
    print_details();
    cout << "Type : 'L'" << endl;
  }
};

class heavy_vehicle : public vehicle
{
public:
  static const char typ = 'H';
  void display()
  {
    print_details();
    cout << "Type : 'H'" << endl;
  }
};
int main()
{
  char typ;
  cout << "Type (L or H):";
  cin >> typ;
  vehicle *v;
  if (typ == 'L' || typ == 'l')
  {
    v = new light_vehicle();
    v->read_details();
  }
  else if (typ == 'H' || typ == 'h')
  {

    v = new heavy_vehicle();
    v->read_details();
  }
  else
  {
    cout << "Invalid type neither L nor H is got" << endl;
    return 1;
  };
  cout << "\nDetails of the vehicle:" << endl;
  v->display();

  cout << "Hi";
}
