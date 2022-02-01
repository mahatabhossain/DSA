#include <iostream>
using namespace std;

int main()
{
    int range, i;
    int elements[range];

    cout << "Enter range: " << endl;
    cin >> range;

    for (i = 0; i < range; i++)
    {
        cin >> elements[i];
    }

    cout << "Elements are " << endl;
    for (int j = 0; j < range; j++)
    {
        cout << elements[j] << " ";
    }
    cout << endl;
    return 0;
}
