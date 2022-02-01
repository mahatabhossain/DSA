#include <iostream>
using namespace std;

int main()
{
    int arr[] = {20, 30, 40, 50, 70};
    int target_element, storeElement;

    cin >> target_element;
    int element = 0;
    for (int i = 0; i < arr[i]; i++)
    {

        if (arr[i] == target_element)
        {
            element = 1;
            storeElement = i;
        }
    }
    if (element == 1)
    {
        cout << "Target element " << target_element << " found at index " << storeElement;
    }
    else
    {
        cout << "Taget element not found";
    }
    return 0;
}