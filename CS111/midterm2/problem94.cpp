#include <iostream>
using namespace std;


int thirdDigit(int x)
{
  if(x<100)
    return 0;
  if(x<1000)
    return x%10;
  return thirdDigit(x/10);
}



int main(){
  cout << thirdDigit(777) << " " << thirdDigit(2048) << " " << thirdDigit(500125) << endl;
  return 0;
}
