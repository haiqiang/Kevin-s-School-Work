#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int array[n];
  for ( int i = 0; i < n; i++)
    {    
      cout << "Enter " << i+1 << " positive integer: ";
      cin >> array[i];
    }
  int sum=0;
  for ( int i = 0; i < n; i++)
    if(array[i]>0)   
      sum+=array[i];
  cout << "Sum: " << sum << endl;
  return 0;
}
