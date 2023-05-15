#include <iostream>
using namespace std;

int main()
{
  // App 1 => Even / Odd Checker

  int num;
  cin >> num;

  if (num % 2 == 0)
    cout << "The Number " << num << " Is Even\n";
  else
    cout << "The Number " << num << " Is Odd\n";
    
    return 0;

}