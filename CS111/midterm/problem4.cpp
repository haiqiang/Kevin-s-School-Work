#include <iostream>
using namespace std;

int main(){
  int n;
  cout <<"Enter a number: ";
  cin >>n;
  int rows=n+n-1;
  for (int r=1;r<=rows;r++)
    {
      for(int c=1;c<=n;c++)
	{	
	  if((r+c)==(n+1)||(r-c)==(n-1))
	    cout << "*";
	  else
	    cout <<" ";
	}
      cout <<endl;
    }
  return 0;
}
