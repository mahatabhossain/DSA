#include <iostream>
using namespace std;

int main()
{
    int num, remainder, sum = 0;

    cin >> num;
    int storeNum = num;
    while (num != 0)
    {
        int temp = 0;
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num = num / 10;
    }
    // cout << num << endl;
    // cout << sum << endl;
    // cout << temp;
    if (storeNum == sum)
    {
        cout << "Amstrong number";
    }
    else
    {
        cout << "Not amstrong";
    }
    return 0;
}