#include <iostream>
using namespace std;

int main()
{
  double top, bottom, height, area; // identify all the variables im using in this program

  cout << "Please enter an integer for top base: "; //display a message for the user to input integer for top base
  cin >> top; // stores in top variable
 
  cout << "Please enter an integer for bottom base: ";// display a message for the user to input integer for bottom base
  cin >> bottom; // stores in bottom variable

  cout << "please enter an integer for the height: "; // display a message for the user to input integer for height
  cin >> height; //stores in height variable

  area =((double)1/2)*height*(top+bottom); //the formula to calculate area.

  cout << "The area for the Trapezoid is: " << area << endl; // display the output and the area of the trapezoid.
 return 0;
}
