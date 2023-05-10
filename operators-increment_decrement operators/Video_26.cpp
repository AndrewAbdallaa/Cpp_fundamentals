#include <iostream>
using namespace std;

int main()
{
  int likes = 0;
  cout << likes-- << "\n"; // 0
  cout << likes << "\n";   // -1

  int views = 0;
  cout << --views << "\n"; // -1
  cout << views << "\n";   // -1
  return 0;
}