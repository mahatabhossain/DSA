#include <iostream>
using namespace std;

int main()
{
    int target, square;

    cin >> target;
    int arr[] = {10, 12, 14, 20, 30, 40};
    int start = 0, end = (sizeof(arr) / sizeof(int)) - 1, mid, flag = 0;

    while (start <= end)
    {

        mid = (start + end) / 2;

        if (target == arr[mid])
        {
            square = target * target;

            flag = 1;

            break;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (flag == 1)
    {
        // cout << "Found ";
        cout << "Found " << square;
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}