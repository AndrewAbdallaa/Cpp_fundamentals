#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  cout << setprecision(13);
  float fl = 10.1234567891;
  cout << fl << "\n";
  double dob = 10.1234567891;
  cout << dob << "\n";
  auto num = 10;
  cout << num << "\n";
  int nums = 100;
  cout << &nums;
  return 0;
}
