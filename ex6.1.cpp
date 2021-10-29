#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node() { next = NULL; }
};

class List {
public:
  Node *head;
  List() { head = NULL; }
  void create(int arr[], int n) {
    Node *prev = NULL;
    for (int i = 0; i < n; i++) {
      Node *new_node = new Node();
      new_node->data = arr[i];
      if (prev == NULL) {
        head = new_node;
      } else {
        prev->next = new_node;
      }
      prev = new_node;
    }
  }
  void insertAtFront(int new_data) {
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
  }
  void insertAfter(Node *prev, int new_data) {
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev->next;
    prev->next = new_node;
  };
  void append(int new_data) {
    Node *new_node = new Node();
    new_node->data = new_data;
    (getLast())->next = new_node;
  }
  Node *getLast() {
    Node *last = head;
    while (last->next != NULL)
      last = last->next;
    return last;
  }
  void deleteNode(Node *node) {
    Node *prev = head;
    while (prev->next != node)
      prev = prev->next;
    delete (prev->next);
    prev->next = NULL;
  }
  void display() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->data << ' ';
      temp = temp->next;
    }
    cout << endl;
  }
  ~List() {
    Node *tmp = head;
    while (tmp != NULL) {
      Node *next = tmp->next;
      delete tmp;
      tmp = next;
    }
  }
};
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  List a;
  a.create(arr, n);
  a.display();
  a.append(6);
  a.display();
  a.insertAtFront(0);
  a.display();
}