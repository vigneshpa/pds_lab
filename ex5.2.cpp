#include <iostream>
using namespace std;
class shape
{
protected:
  double area;

public:
  virtual void calculate_area() = 0;
  virtual int get_area() = 0;
  void display_area()
  {
    cout << "Area : " << area << endl;
  };
};
class Square : public shape
{
private:
  int side;

public:
  Square(int s)
  {
    side = s;
  }
  void calculate_area()
  {
    area = side * side;
  }
  // display_area(){ .. }
  int get_area()
  {
    return area;
  }
};

class Rectangle : public shape
{
private:
  int length, breadth;

public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }
  void calculate_area()
  {
    area = length * breadth;
  }
  // display_area(){ .. }
  int get_area()
  {
    return area;
  }
};
int main()
{
  int r, l, b;
  cout << "Square" << endl
       << "Side : ";
  cin >> r;
  Square s(r);
  s.calculate_area();
  s.display_area();
  cout << "Rectangle" << endl
       << "Length : ";
  cin >> l;
  cout << "Breadth : ";
  cin >> b;
  Rectangle rect(l, b);
  rect.calculate_area();
  rect.display_area();
  cout << "Hi";
}
