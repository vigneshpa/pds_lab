#include <iostream>
using namespace std;
class Matrix {
  int a[10][10], rows, cols;

public:
  Matrix(int r = 2, int c = 2) { rows = r, cols = c; };
  Matrix operator+(const Matrix m) {
    Matrix c(rows, cols);
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        c.a[i][j] = a[i][j] + m.a[i][j];
    return c;
  };
  Matrix operator-(const Matrix m) {
    Matrix c(rows, cols);
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        c.a[i][j] = a[i][j] - m.a[i][j];
    return c;
  };
  bool operator==(const Matrix m) {
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        if (a[i][j] != m.a[i][j])
          return false;
    return true;
  };
  bool operator<(const Matrix m) {
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        if (a[i][j] > m.a[i][j])
          return false;
    return true;
  };
  Matrix operator*(const Matrix m) {
    Matrix c(rows, m.cols);
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < m.cols; j++) {
        c.a[i][j] = 0;
        for (int k = 0; k < m.rows; k++)
          c.a[i][j] += a[i][k] * m.a[k][j];
      }
    return c;
  };
  void read_values() {
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        cin >> a[i][j];
  };
  void print_values() {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++)
        cout << a[i][j] << " ";
      cout << endl;
    }
  };
};
int main() {
  int n;
  cout << "N: ";
  cin >> n;
  Matrix a(n, n);
  Matrix b(n, n);
  cout << "A Values: ";
  a.read_values();
  cout << "B Values: ";
  b.read_values();

  Matrix c = a + b;
  cout << "A+B:" << endl;
  c.print_values();

  Matrix d = a * b;
  cout << "A*B:" << endl;
  d.print_values();

  bool e = a == b;
  cout << "A==B:" << (e ? "Yes" : "No") << endl;
}
