#include <iostream>
using namespace std;
class binary {
  int start, end, mid;

public:
  binary(int arr[], int n, int item) {
    start = 0;
    end = n - 1;
    mid = (start + end) / 2;
    //	sort(arr,n);
    check(start, end, mid, arr, item);
  }
  void check(int s, int e, int m, int a[], int item) {
    int loci = 0;
    while ((s <= e) && (a[mid] != item)) {
      if (item < a[mid]) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
      mid = (start + end) / 2;
    }
    if (start > end) {
      loci = -1;
    } else {
      loci = mid + 1;
    }
    cout << loci;
  }
};
int main() {
  int values[10], size, item;
  cout << "Enter the size of the Array : ";
  cin >> size;
  cout << "Enter the Elements : ";
  for (int i = 0; i < size; i++) {
    cin >> values[i];
  }
  cout << "Enter the Item : ";
  cin >> item;
  binary b(values, size, item);
  return 0;
}
