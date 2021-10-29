#include <iostream>
using namespace std;
class Reservation {
protected:
  string from, to, train_no;
  int passenger_count;

public:
  void setValues(string frm, string t, string tn, int n) {
    from = frm;
    to = t;
    train_no = tn;
    passenger_count = n;
  };
  string getFrom() { return from; };
  string getTo() { return to; };
  string getTrainNo() { return train_no; };
  int getCount() { return passenger_count; };
};
class General : public Reservation {
  double fare;
  char type;

public:
  double setFare(double f) { fare = f; }
  double getFare() { return fare; }
  General() { type = 'G'; }
};
class Tatkal : public Reservation {
  double fare;
  char type;

public:
  double setFare(double f) { fare = f; }
  double getFare() { return fare; }
  Tatkal() { type = 'T'; }
};
int main() {

  string from, to, train_no;
  double fare;
  int passenger_count;
  char type;

  cout << "Enter Details: " << endl << "Train Number: ";
  cin >> train_no;
  cout << "From: ";
  cin >> from;
  cout << "To: ";
  cin >> to;
  cout << "Passenger Count: ";
  cin >> passenger_count;
  cout << "Fare: ";
  cin >> fare;
  cout << "Type: ";
  cin >> type;
  cout << endl;

  if (type == 'G') {
    General a;
    a.setValues(from, to, train_no, passenger_count);
    a.setFare(fare);
    cout << "Train Number: " << a.getTrainNo() << endl
         << "From:" << a.getFrom() << endl
         << "To: " << a.getTo() << endl
         << "Passenger Count: " << a.getCount() << endl
         << "Fare: " << a.getFare() << endl
         << "Type: General" << endl;
  } else if (type == 'T') {
    Tatkal a;
    a.setValues(from, to, train_no, passenger_count);
    a.setFare(fare);
    cout << "Train Number: " << a.getTrainNo() << endl
         << "From: " << a.getFrom() << endl
         << "To: " << a.getTo() << endl
         << "Passenger Count: " << a.getCount() << endl
         << "Fare: " << a.getFare() << endl
         << "Type: Tatkal" << endl;
  }
}
