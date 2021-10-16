#include <iostream>
using namespace std;
class Matrix {
  int a[10][10];
  int rows;
  int cols;

public:
  Matrix(int r = 0, int c = 0) {
    rows = r;
    cols = c;
  }
  Matrix operator+(Matrix m) {
    if (this->rows != m.rows || this->cols != m.cols) throw invalid_argument("Matrices dont have similar rows and columns");
    Matrix c(rows, cols);
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++) {
        c.a[i][j] = (this->a[i][j]) + (m.a[i][j]);
      }
    return c;
  }
  Matrix operator-(Matrix m) {
    if (this->rows != m.rows || this->cols != m.cols) throw invalid_argument("Matrices dont have similar rows and columns");
    Matrix c(rows, cols);
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        c.a[i][j] = this->a[i][j] - m.a[i][j];
    return c;
  }
  bool operator==(Matrix m) {
    if (this->rows != m.rows || this->cols != m.cols) throw invalid_argument("Matrices dont have similar rows and columns");
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        if (this->a[i][j] > m.a[i][j]) return false;
    return true;
  }
  bool operator<(Matrix m) {
    if (this->rows != m.rows || this->cols != m.cols) throw invalid_argument("Matrices dont have similar rows and columns");
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        if (this->a[i][j] != m.a[i][j]) return false;
    return true;
  }
  Matrix operator*(Matrix m) {
    if (this->rows != cols || this->cols != m.rows) throw invalid_argument("Matrices dont have similar rows and columns");
    Matrix c(rows, m.cols);

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < m.cols; j++) {
        c.a[i][j] = 0;

        for (int k = 0; k < m.rows; k++) {
          c.a[i][j] += this->a[i][k] * m.a[k][j];
        }
      }
    }
    return c;
  }

  void read_values() {
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        cin >> a[i][j];
  }
  void print_values() {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++)
        cout << a[i][j] << " ";
      cout << endl;
    }
  }
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
  cout << "A+B:\n";
  c.print_values();

  Matrix d = a * b;
  cout << "A*B:\n";
  d.print_values();

  bool e = a == b;
  cout << "A==B: " << (e ? "Yes" : "No") << endl;
}
