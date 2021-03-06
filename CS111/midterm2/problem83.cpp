#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp=a;
  a=b;
  b=temp;
}

void order(int &a, int &b) 
{
  if (a<b) swap(a,b);
}

void sort(int &a, int &b, int &c)
{
  order(a,b);
  order(a,c);
  order(b,c);
}

int main(){
  int a = 2, b = 7, c = 1;
  sort(a,b,c);
  cout << a << b << c << endl;
  return 0;
}
