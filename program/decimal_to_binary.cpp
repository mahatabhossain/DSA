#include <iostream>
using namespace std;

int main()
{
    // int binary = 0, m = 1;
    int binaryNumber = 10, remainder, number;
    int arr[10];
    int count = 0, count2 = 0;
    cin >> number;
    int size = sizeof(arr) / sizeof(int);

    for (int number2 = 1; number2 <= binaryNumber; number2++)
    {
        int i = 0;
        number = number2;

        while (number != 0)
        {
            /* code */
            remainder = number % 2;
            arr[i] = remainder;
            // cout << remainder;
            number = number / 2;
            i++;
            // binary = binary + remainder * m;
            // m = m * 10;
            if (remainder == 0)
                count += 1;
            if (remainder == 1)
                count2 += 1;
        }

        // cout << binary << endl;
        for (int j = i - 1; j >= 0; j--)
        {
            cout << arr[j];
        }
        cout << endl;
        cout << "Number of zero " << count << endl;
        cout << "Number of one " << count2 << endl;
        // cout << binary << endl;
    }
    return 0;
}