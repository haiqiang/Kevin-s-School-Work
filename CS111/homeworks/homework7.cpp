#include <iostream>
using namespace std;

int main(){
  
  // identifies variables numofstudents as int and variable average,grade,max and sum as double. Also initialized sum is equal 0 and max to -9999999999999
  int numOfStudents;
  double average,grade,max=-9999999999999,sum=0;
  
  // askes the user to input the number of student in class
  cout << "Enter the amount of students in class ";
  cin >> numOfStudents;
  
  //starts a loop according to the number of students. this loop askes the user to enter the grades numerous times base on the number of student in class. it will add up all the grades that the user inputs and calculate the highest grade by comparing the grade entered each time. if the grade is higher then the current max it will replace the max. However if the grade is lower then the current max it will just continue.
  
  for(int i=1;i<=numOfStudents;i++)
    {
      cout << "Enter the student's grade ";
      cin >> grade;
      sum = sum  + grade;
      if(grade>=max)
	{
	  max=grade;
	}
      else 
	{
	  max;
	}
    }
  
  //calculates the average of the entire class by dividing the sum with the number of students. Also displays out the average number in doubles and the highest grade in class  
  average = sum/numOfStudents;
  cout << "The average grade is " << average << endl;
  cout << "The highest grade is " << max << endl;
  return 0;
}

