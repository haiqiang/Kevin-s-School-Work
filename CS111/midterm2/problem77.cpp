#include <iostream>
using namespace std;

void reverse(int a[], int size)
{
  for(int i = 0; i < size/2; i++)
    {
      int temp=a[i];
      a[i]=a[size-1-i];
      a[size-1-i]=temp;
    }
}


int main(){
  int a[5]={3,1,4,1,5};
  reverse(a,5);
  cout << a[0] <<a[1] << a[2] << a[3] << a[4];
  cout << endl; 
  return 0;
}
