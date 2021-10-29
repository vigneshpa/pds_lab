#include <iostream>
using namespace std;
bool isLeap(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        return true;
      } else
        return false;
    }
    return true;
  }
  return false;
}
int main() {
  int year;
  cin >> year;
  cout << (isLeap(year) ? "Yes" : "No") << endl;
}
