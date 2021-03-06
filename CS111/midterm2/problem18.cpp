#include <iostream>
using namespace std;

int bigDown(int x)
{
  if(x<10)
    {
      if(x>=5)
	return x-1;
      return x;
    }
  return 10*bigDown(x/10)+bigDown(x%10);
}

int main() {
  cout << bigDown(10) << endl; // prints 10
  cout << bigDown(2654) << endl; // prints 2544
  cout << bigDown(19683) << endl; // prints 18573
  return 0;
}
