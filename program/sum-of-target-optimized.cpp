#include <iostream>
using namespace std;

int main()
{
    int target; // 11
    cin >> target;
    int arr[] = {2, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int), flag = 0;
    int start = 0, end = size - 1;

    for (int i = 0; i <= end; i++)
    {
        if ((arr[start] + arr[end]) == target)
        {
            flag = 1;
            break;
        }
        if ((arr[start] + arr[end]) > target)
        {
            end = end - 1;
        }
        if ((arr[start] + arr[end]) < target)
        {
            start = start + 1;
        }
    }
    if (flag == 1)
        cout << "Element found" << endl;

    else
        cout << "Not found" << endl;
    return 0;
}