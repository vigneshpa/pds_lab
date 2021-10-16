#include <iostream>
using namespace std;
class Book {
  int callno;
  string book_name;
  float price;
  static int book_id;

public:
  //Constructor
  Book() {
    callno = book_id++; //Assign book_id to callno
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
    cout << "Book Name: " << book_name << endl;
    cout << "Price: " << price << endl;
    cout << "Call No: " << callno << endl;
  }
};
int Book::book_id = 1000;

int main() {
  Book a;
}
