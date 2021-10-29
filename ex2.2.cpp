#include <iostream>
using namespace std;
class Book {
  int callno;
  string book_name;
  float price;
  static int book_id;

public:
  Book() {
    callno = book_id++;
    read_details();
    print_details();
  }
  void read_details() {
    cout << "Book Name: ";
    getline(cin, book_name);
    cout << "Price: ";
    cin >> price;
  }
  void print_details() {
    cout << "Book Name: " << book_name << endl
         << "Price: " << price << endl
         << "Call No.: " << callno << endl;
  }
};
int Book::book_id = 1000;
int main() { Book a; }
