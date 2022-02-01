// 10 = 0+1+1+2+3+5+8
#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int next = 0;
    int a = 0, b = 1;

    cout << a << " " << b << " ";
    while (next < num)
    {
        next = a + b;
        a = b;
        b = next;
        if (next > num)
            break;
        cout << next << " ";
    }
}

int main()
{
    int num;
    cin >> num;

    fibonacci(num);
    return 0;
}