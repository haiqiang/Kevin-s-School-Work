#include <iostream>
using namespace std;

int main(){
  string name,day, month, year;
  cout <<"Enter your name and the month, day, and year of your birth: ";
  cin >> name >>  month>> day >> year;
  cout << "Hello " <<  name  << endl;
  if(month=="3"&&day=="14")
    cout << "Happy Birthday " << endl;
  return 0;
}  
