#include <iostream>
using namespace std;

int main()
{
    int number, fact = 1;

    cin >> number;
    // while (number > 0)
    // {
    //     fact *= number;
    //     number--;
    // }

    // for (int i = number; i > 0; i--)
    // {
    //     fact *= i;
    // }

    for (int i = 2; i <= number; i++)
        fact *= i;
    cout << fact;

    return 0;
}