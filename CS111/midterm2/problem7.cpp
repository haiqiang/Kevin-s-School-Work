#include <iostream>
using namespace std;

int cutNine(int n) {
  if (n == 0 || n % 10 == 9) return cutNine(n/10)*10+cutNine(n%10);
  return n;
}

int main() {
  cutNine(770); cout << endl; // prints 770
  cutNine(135792468); cout << endl; // prints 2468
  cutNine(1991991); cout << endl; // prints 1
  cutNine(1991999); cout << endl; // prints
  return 0;
}
