#include <iostream>
using namespace std;
class svceian{
  protected:
    string name,email,dept;
  public:
    void read();
    void display();
};
class faculty:virtual public svceian{
  string empid,grade;
public:
  void read(){
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Department: ";
    cin >> dept;
    cout << "Emp ID: ";
    cin >> empid;
    cout << "Grade: ";
    cin >> grade;
  }
  void display(){
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Department: " << dept << endl;
    cout << "Emp ID: " << empid << endl;
    cout << "Grade: " << grade << endl;
  }
};
class student:virtual public svceian{
  string rollno,degree;
public:
  void read(){
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Department: ";
    cin >> dept;
    cout << "Roll No: ";
    cin >> rollno;
    cout << "Degree: ";
    cin >> degree;
  }
  void display(){
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Department: " << dept << endl;
    cout << "Roll No: " << rollno << endl;
    cout<<"Degree: " << degree << endl;
  }
};
class researcher:public faculty,public student{
  string resid,restype;
public:
  void read(){
    cout << "Name: ";
    cin >> name;
    cout << "Email: ";
    cin >> email;
    cout << "Department: ";
    cin >> dept;
    cout << "Res ID: ";
    cin >> resid;
    cout << "Res Type: ";
    cin >> restype;
  }
  void display(){
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Department: " << dept << endl;
    cout << "Res ID: " << resid << endl;
    cout << "Res Type: " << restype << endl;
  }
};
int main(){
  cout << endl << "Faculty Details" << endl;
  faculty f;
  f.read();
  f.display();
  cout << endl << "Student Details" << endl;
  student s;
  s.read();
  s.display();
  cout << endl << "Researcher Details" << endl;
  researcher r;
  r.read();
  r.display();
  return 0;
}
