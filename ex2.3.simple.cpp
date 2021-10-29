#include <iostream>
using namespace std;
class Number {
  int ar[50], n;
public:
  friend float find_mean(Number a);
  Number(){
    cout << "N: ";
    cin >> n;
    cout << "Values: ";
    for(int i=0;i<n;i++)
      cin >> ar[i];
  };
};
float find_mean(Number a){
  float sum = 0;
  for(int i=0;i<a.n;i++)
    sum += a.ar[i];
  return (float)sum / a.n;
}
int main(){
  Number a;
  cout << "Mean: " << find_mean(a) << endl;
  return 0;
}
