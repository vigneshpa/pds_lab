#include <iostream>
using namespace std;
#define MAX 1000
class Stack {
public:
  int arr[100], top;

  Stack() { top = -1; }
  void push(int data) { arr[++top] = data; }
  int pop() { return arr[top--]; }
  int peek() { return arr[top]; }

  bool isEmpty() { return (top < 0); }
};

int main() {
  class Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout << s.pop() << " Popped from stack\n";
  cout << "Elements present in stack : ";
  while (!s.isEmpty()) {
    cout << s.peek() << " ";
    s.pop();
  }

  cout << endl;
}
