#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int num_one = 100;
  int num_two = -500;
  int num_three = 0;
  int num_four = true;
  // int num_five = "Elzero"; // Problem
  cout << num_one << endl;
  cout << num_two << endl;
  cout << num_three << endl;
  cout << num_four << endl;

  cout << INT_MIN << endl;
  cout << INT_MAX << endl;

  cout << sizeof(int) << endl;
  cout << sizeof(char) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(bool) << endl;

  int last_num = 10.5;
  cout << last_num << endl;
  return 0;
}
