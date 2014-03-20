#include <iostream>
using namespace std;

void alternates(int x){
  cout << x%10;
  if ( x>=100)
    alternates(x/100);  
}

int main() {
  alternates(10); cout << endl; // prints 0
  alternates(123456); cout << endl; // prints 642
  alternates(1000); cout << endl; // prints 00
  return 0;
}
