#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  string name = "Osama";
  bool status = true;

  int num_one = 100;
  int num_two = 20;

  cout << sizeof(num) << "\n";
  cout << sizeof(name) << "\n";
  cout << sizeof(status) << "\n";

  cout << num_one / num_two; // 100 / 20 = 5
  // cout << num_one / name; // Error

  return 0;
}
