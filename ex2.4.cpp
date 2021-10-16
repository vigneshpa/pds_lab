#include <iostream>
using namespace std;
class Number {
  int *ar, n;
  int sum;

public:
  Number(int s) {
    n = s;
    ar = new int[n];
  }
  void read_ar() {
    for (int i = 0; i < n; i++)
      cin >> ar[i];
  }
  int calc_sum() {
    sum = 0;
    for (int i = 0; i < n; i++)
      sum = sum + ar[i];
    return sum;
  }

  ~Number() {
    delete[] ar;
  }
};
int main() {
  int n;
  cout << "N: ";
  cin >> n;
  Number a(n);
  cout << "Values: ";
  a.read_ar();
  cout << "Sum: " << a.calc_sum() << endl;
}
