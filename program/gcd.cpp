#include <iostream>
using namespace std;

void gcd()
{
    int num1, num2, ans;
    cin >> num1 >> num2;
    for (int i = 2; i <= num1 & i <= num2; i++)
    {
        if ((num1 % i) == (num2 % i))
        {
            ans = i;
        }
    }
    cout << ans << endl;
    cout << (num1 * num2) / ans;
}

int main()
{
    gcd();
    return 0;
}
