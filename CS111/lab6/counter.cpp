//this program prints all the numbers from 0 to n
//where n is the value user specifies

#include <iostream>
using namespace std;

int main(){
  int number;
  cout<< "Enter a number: ";
  cin >> number;

  int counter = 0;
  cout << "here are all the positive numbers between 0 and " << number;
  cout << ":" << endl;

  if( counter < 0)
    {
      cout << "Invalid number!"<< endl;
      exit(1);
    }
  while(counter <= number)
    {
      cout <<  counter <<endl;
      ++counter;
    }

  cout << endl;
  cout << "That's all, goodbye." << endl;

  return 0;
}
