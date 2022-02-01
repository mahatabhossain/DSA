#include <iostream>
using namespace std;

int main()
{
    int target;
    cin >> target;
    int arr[] = {2, 6, 7, 4, 3, 10};
    int size = sizeof(arr) / sizeof(int), flag = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (target == arr[i] + arr[j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "Element found" << endl;

    else
        cout << "Not found" << endl;
    return 0;
}