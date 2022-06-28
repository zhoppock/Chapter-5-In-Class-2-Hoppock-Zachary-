// Hoppock, Zachary
// averageInputFunction.cpp
// Calculate the average of four inputted numbers by doing it inside a function
// Version # 1

#include <iostream>
using namespace std;

/**
Calculates the average of four inputted numbers
@param w the first number
@param x the second number
@param y the third number
@param z the fourth number
@return the average of the four numbers
*/

double num_average(int w, int x, int y, int z)
{
  int sum = w + x + y + z;
  int average = sum / 4;
  return average;
}

int main()
{
  int num1;
  int num2;
  int num3;
  int num4;
  cout << "What is the first number to be averaged?" << endl;
  cin >> num1;
  cout << "What is the second number to be averaged?" << endl;
  cin >> num2;
  cout << "What is the third number to be averaged?" << endl;
  cin >> num3;
  cout << "What is the fourth and final number to be averaged?" << endl;
  cin >> num4;

  int average = num_average(num1, num2, num3, num4);
  cout << "The average of the four numbers is " << average;
  return 0;
}