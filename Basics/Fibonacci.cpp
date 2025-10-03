#include <iostream>
using namespace std;
int main()
{
    int zerothTerm = 0;
    int firstTerm = 1;
    int terms;
    cout << "Enter how many terms you need:";
    cin >> terms;
    cout << zerothTerm << " " << firstTerm;
    for (int i = 2; i < terms; i++)
    {
        int secondTerm = zerothTerm + firstTerm;
        zerothTerm = firstTerm;
        firstTerm = secondTerm;
        cout << " " << secondTerm;
    }
}