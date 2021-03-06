#include <iostream>
using namespace std;


/**
 * This function gets the number input from user
 *
 * Parameters - no parameters
 * Return - return the number enter from user.
 */

int getNumber()
{
  int num; 
  cout << "Enter a number: ";
  cin >> num;
  return num;
}

/**                                                                             * This function gets the digit input from user                                *                                                                            
 * Parameters - no parameters                                                   * Return - return the digit enter from user.                                 
 */

int getDigit()
{
  int digit;
  cout << "Enter a digit: ";
  cin >> digit;
  return digit;
}

/**                                                                            
 * This function removes the digit from the number                              *                                                                            
 * Parameters - the number and digit entered                                    * Return - return the number after the digit is removed.                      
 */

int digitRemover(int num, int digit)
{
  if(num<10)
    if(num!=digit)
      return num;   
  if(num%10==digit)
    return digitRemover(num/10,digit);
  return digitRemover(num/10,digit)*10+num%10;
}

int main()
{
  int number = getNumber();
  int digit = getDigit();
  cout << digitRemover( number, digit ) << endl;
  return 0;
}
