#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a positive integer ";
  cin >> n;
  if(n<0) exit(1);
  for(int r=1;r<=n;r++)
    {
      int sum=0;
      for(int c=1;c<=r;c++)
	{
	  cout << c << " ";
	  sum+=c;
	}
      cout << "the sum is " << sum << endl;
    }
  return 0;
}
