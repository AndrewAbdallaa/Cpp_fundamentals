#include <iostream>
using namespace std;

int main()
{
  int age = 15;
  int points = 450;

  if (age >= 18)
  {
    cout << "OK\n";
  }
  else
  {
    if (points >= 500)
    {
      cout << "OK Because Of the Points\n";
    }
    else
    {
      cout << "No Age Or Points achived\n";
    }
  }

    cout << (age >= 18 ? "OK\n" : (points >= 500 ? "OK P\n" : "No P\n"));
    cout << (points >= 500 ? "OK P\n" : "No P\n");

  if (age >= 18)
    cout << "OK\n";
  else
    cout << "Not OK\n";

  return 0;
}