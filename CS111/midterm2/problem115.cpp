#include <iostream>
using namespace std;

int biggestEntry(int array[][3], int row, int col)
{
  int max=0;
  for (int r = 0; r<row;r++)
    {
      for(int c = 0; c<col; c++)
	{
	  if(array[r][c]>max)
	    max=array[r][c];
	}
    }
  return max;
}

int main(){
  int x[2][3] = {{1,2,3},{4,7,3}};
  cout << biggestEntry(x, 2, 3) << endl;
  return 0;
}
