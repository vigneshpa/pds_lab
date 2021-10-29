#include <iostream>
using namespace std;
void min_max(int arr[], int n, int &min, int &max) {
  if (n == 1)
    min = max = arr[0];
  if (arr[0] > arr[1]) {
    max = arr[0];
    min = arr[1];
  } else {
    max = arr[1];
    min = arr[0];
  };
  for (int i = 2; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }
};
void min_max(float arr[], int n, float &min, float &max) {
  if (n == 1)
    min = max = arr[0];
  if (arr[0] > arr[1]) {
    max = arr[0];
    min = arr[1];
  } else {
    max = arr[1];
    min = arr[0];
  }
  for (int i = 2; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }
};
int main() {
  int n;
  int *arr;
  cout << "Integer Array\nN: ";
  cin >> n;
  arr = new int[n];
  cout << "Values: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int min;
  int max;
  min_max(arr, n, min, max);
  cout << "Min: " << min << endl << "Max: " << max << endl;

  float *float_arr;
  cout << "\nFloat array\nN: ";
  cin >> n;
  float_arr = new float[n];
  cout << "Values: ";
  for (int i = 0; i < n; i++)
    cin >> float_arr[i];
  float float_min, float_max;
  min_max(float_arr, n, float_min, float_max);
  cout << "Min: " << float_min << endl << "Max: " << float_max << endl;
}
