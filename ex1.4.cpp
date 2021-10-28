#include <iostream>
using namespace std;
int factorial(int n){
  return n==1 ? 1 : factorial(n-1)*n;
}
int main(){
  int a;
  cin >> a;
  cout << "Factorial of " << a << " is "
       << factorial(a) << endl;
}
