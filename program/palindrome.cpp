#include <iostream>
using namespace std;

int main()
{
    int num, remainder, sum = 0;

    cin >> num;
    int storeNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum * 10 + remainder;
        num = num / 10;
    }

    if (storeNum == sum)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}