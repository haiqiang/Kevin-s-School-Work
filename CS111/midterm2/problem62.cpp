#include <iostream>
using namespace std;

int main(){
  srand(time(0));
  for (int i = 0; i < 8; i++)
    cout << rand()%99-99 << " ";
  cout << endl;
  return 0;
}
