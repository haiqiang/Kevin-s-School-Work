#include <iostream>
using namespace std;

void boeing(int x)
{
  if (x<10)
    cout << 7 << x << 7;
  else
    {
      boeing(x/10);
      cout << x%10 << 7;
    }
}



int main(){
  boeing(4); cout << endl; // prints 747
  boeing(66); cout << endl; // prints 76767
  boeing(7); cout << endl; // prints 777
  boeing(1000); cout << endl; // prints 717070707
  return 0;
}
