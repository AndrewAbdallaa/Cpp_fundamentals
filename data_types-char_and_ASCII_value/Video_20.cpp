#include <iostream>
using namespace std;

int main()
{
  char a = 'A';
  cout << sizeof(a) << "\n"; // 1

  auto b = 'B';
  cout << sizeof(b) << "\n"; // 1

  auto c = "C";
  cout << sizeof(c) << "\n"; // 8

  char d = 'Z';
  cout << int(d) << "\n"; // 90

  cout << int('%') << "\n"; // 37
  cout << int('(') << "\n"; // 40
  cout << int(')') << "\n"; // 41

  // cout << int("Z") << "\n"; // Error

  cout << char(81) << "\n"; // Q

  return 0;
}