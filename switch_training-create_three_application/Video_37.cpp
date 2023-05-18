#include <iostream>
using namespace std;

int main()
{
  // App 1 => Award System Application

    int num;
    cout << "Type The Number\n";
    cin >> num;

    switch (num)
    {
    case 100:
    case 110:
    case 120:
        cout << "Congratz For The iPhone";
        break;
    case 200:
        cout << "Congratz For The iPad";
        break;
    case 300:
        cout << "Congratz For The TV";
        break;
    case 400:
        cout << "Congratz For The KeyChain";
        break;
    default:
        cout << "No Award For This Number";
    }

    // App 2 => Discount Application

    int price = 100;
    int discount = 10;
    int years;
    cout << "Type The Number Of Years in Company\n";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;
        break;
    case 2:
        discount = 40;
        break;
    case 3:
        discount = 80;
        break;
    }

    cout << "The Price Is " << price - discount << "\n";
    return 0;
}
