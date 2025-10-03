#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements into the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ptr = arr;
    cout << "Traversing using the pointer:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}