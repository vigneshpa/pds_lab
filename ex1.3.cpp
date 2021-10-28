#include <iostream>
using namespace std;
int strLength(char *str){
  int i;
  for(i=0;str[i]!='\0';i++);
  return i;
}
int main(){
  char inp[30];
  cin >> inp;
  cout << "Length of the string is "
       << strLength(inp) << endl;
}
