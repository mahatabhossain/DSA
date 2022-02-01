#include <iostream>
using namespace std;

void leapyear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap year";
    }
    else
    {
        while (year)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                cout << "Nearest leap year " << year;
                break;
            }
            year--;
        }
    }
}

int main()
{
    int year;
    cin >> year;
    leapyear(year);
    return 0;
}