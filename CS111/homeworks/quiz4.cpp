#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter a positive integer: ";
  cin >> x;
  for ( int i = 1 ; i <= x % 10; i++ )
    cout << x << i << ".";
  cout << x / 10 << endl;
  return 0;
}
