#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter how many numbers do you want:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    int max = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "\n";
    cout << "\nMaximum number in the array:" << max;
}