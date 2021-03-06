#include <iostream>
using namespace std;

int doubleDigit(int num)
{
  if(num<10)
    return num%10*10+num%10;
  return doubleDigit(num/10)*10+num%10;
}

int main() {
cout << doubleDigit(9) << endl; // prints 99
cout << doubleDigit(81) << endl; // prints 8811
cout << doubleDigit(243) << endl; // prints 224433
cout << doubleDigit(244) << endl; // prints 224444
return 0;
}
