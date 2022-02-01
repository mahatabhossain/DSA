#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cin >> num;

    int ans = 0;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans = 1;
        }
    }
    if (ans == 1)
    {
        cout << "Not prime";
    }
    else
    {
        cout << "Prime";
    }
    return 0;
}