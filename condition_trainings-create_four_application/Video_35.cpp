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
    

    // App 2 => Find Greatest Number

  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c)
  {
    cout << a << " Is The Greatest Number\n";
  }
  else if (b > a && b > c)
  {
    cout << b << " Is The Greatest Number\n";
  }
  else
  {
    cout << c << " Is The Greatest Number\n";
  }

  // App 3 => User Rank Checker

  int points;
  cin >> points;

  if (points > 0 && points <= 500)
  {
    cout << "Not Bad\n";
  }
  else if (points > 500 && points <= 1000)
  {
    cout << "Very Good\n";
  }
  else
  {
    cout << "VIP\n";
  }

    return 0;
}


