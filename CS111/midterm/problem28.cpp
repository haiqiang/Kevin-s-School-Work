#include <iostream>
using namespace std;

int main(){
  int size;
  cout <<"Enter an odd positive integer: ";
  cin >> size;
  if(size<0) exit(1);
  for(int r=1;r<=size;r++)
    {
      for(int c=1;c<=size;c++)
	{
	  if(r==1||c==(size+1)/2)
	    cout << "*";
	  else
	    cout << " ";
	}
      cout << endl;
    }
  return 0;
}
