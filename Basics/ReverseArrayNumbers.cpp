#include <iostream>
using namespace std;
int main()
{
    int sizeOfArray;
    cout << "Enter size of the array:";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    cout << "Enter array Elements into the array:";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    // reversing array
    for (int i = sizeOfArray - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
