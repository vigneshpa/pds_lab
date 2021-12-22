#include <iostream>
#define MAX 1000
using namespace std;
class Stack {
public:
  int arr[MAX], top;

  Stack() { top = -1; }
  void push(int data) {
    if (top == MAX - 1) {
      cout << "!! Stack Overflow: Stack is full";
      return;
    }
    arr[++top] = data;
  }
  int pop() {
    if (top == -1) {
      cout << "!! Stack Underflow: Stack is empty";
      return NULL;
    }
    return arr[top--];
  }
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
