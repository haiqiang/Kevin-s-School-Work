#include <iostream> 
using namespace std;

int main(){
  int size;
  cout << "Enter an integer: ";
  cin >> size;
  for ( int r = 1; r <= size; r++)
    {
      for ( int c = 1; c <= 2*size-1; c++)
	{
	  if(r==1||r==c||r+c==2*size)
	    cout << "*";
	  else 
	    cout << " ";
	}
      cout << endl;
    }
  return 0;
}
