#include <iostream>
using namespace std;

class Node {
public:
  int coef;
  Node *next;
  Node() { next = NULL; }
};

class Polynomial {
public:
  Node *head;
  Polynomial() { head = NULL; }
  void create(int arr[], int n) {
    Node *prev = NULL;
    for (int i = 0; i < n; i++) {
      Node *new_node = new Node();
      new_node->coef = arr[i];
      if (prev == NULL) {
        head = new_node;
      } else {
        prev->next = new_node;
      }
      prev = new_node;
    }
  }
  void display() {
    Node *temp = head;
    int i = 0;
    bool empty = true;
    while (temp != NULL) {
      if ((temp->coef) != 0) {
        if (!empty)
          cout << " + ";
        if (i == 0) {
          cout << temp->coef;
        } else if (i == 1) {
          cout << temp->coef << "x";
        } else if ((temp->coef) != 0) {
          cout << temp->coef << "x^" << i;
        }
        empty = false;
      }
      temp = temp->next;
      i++;
    }
    cout << endl;
  }
  ~Polynomial() {
    Node *tmp = head;
    while (tmp != NULL) {
      Node *next = tmp->next;
      delete tmp;
      tmp = next;
    }
  }
};
Polynomial add(const Polynomial &a, const Polynomial &b) {
  Polynomial c;
  Node *tmp1 = a.head, *tmp2 = b.head, *prev = NULL;
  while (tmp1 != NULL || tmp2 != NULL) {
    int c1 = 0, c2 = 0;
    if (tmp1 != NULL) {
      c1 = tmp1->coef;
      tmp1 = tmp1->next;
    }
    if (tmp2 != NULL) {
      c2 = tmp2->coef;
      tmp2 = tmp2->next;
    }

    if (prev == NULL) {
      c.head = new Node();
      c.head->coef = c1 + c2;
      prev = c.head;
    } else {
      prev->next = new Node();
      prev->next->coef = c1 + c2;
      prev = prev->next;
    }
  }
  return c;
};
int main() {
  int pol1[] = {1, 2, 3, 4, 5} // 1 + 2x + 3x^2 + 4x^3 + 5x^4
  ,
      pol2[] = {5, 0, 1, 2} // 5 + 1x^2 + 2x^3
  ;
  const int n1 = 5, n2 = 4;

  cout << "Polynomial A   : ";
  Polynomial a;
  a.create(pol1, n1);
  a.display();

  cout << "Polynomial B   : ";
  Polynomial b;
  b.create(pol2, n2);
  b.display();

  cout << "Polynomial A+B : ";
  Polynomial c = add(a, b);
  c.display();
}