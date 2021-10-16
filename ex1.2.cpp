#include <iostream>
using namespace std;
//Returns true if n is PRIME; false otherwise
bool isPrime(int n) {
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;
  return true;
}
//Generates Prime numbers from num1 to num2
void generatePrimeNumbers(int num1, int num2) {
  for (int i = num1; i <= num2; i++)
    if (isPrime(i))
      cout << i << ", ";
}
int main() {
  int n;
  cin >> n;
  generatePrimeNumbers(1, n);
  cout << endl;
}