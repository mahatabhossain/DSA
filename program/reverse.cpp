#include <iostream>
using namespace std;

int main()
{
    int number, initialNum, remainder, reverseNum = 0;

    cin >> number;

    initialNum = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverseNum = reverseNum * 10 + remainder;
        number = number / 10;
    }

    if (initialNum != reverseNum)
    {
        cout << "Number reversed " << reverseNum;
    }
    else
    {
        cout << "Number not reversed";
    }
    return 0;
}