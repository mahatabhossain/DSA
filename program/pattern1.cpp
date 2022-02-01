#include <iostream>
using namespace std;

int main()
{
    int inp, i, j, k;
    cin >> inp;

    for (i = 1; i <= inp; i++)
    {
        for (j = inp; j > i; j--)
        {
            cout << " ";
        }
        for (k = 0; k < i * 2 - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (i = 1; i <= inp; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (k = inp * 2 - 2; k > i * 2 - 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}