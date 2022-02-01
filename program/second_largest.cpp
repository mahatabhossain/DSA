#include <iostream>
using namespace std;

void secondLargest(int arr[], int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Second largest element: " << arr[size - 2];
}

int main()
{
    int arr[] = {5, 9, 2, 4};
    int size = sizeof(arr) / sizeof(int);

    secondLargest(arr, size);
    return 0;
}
