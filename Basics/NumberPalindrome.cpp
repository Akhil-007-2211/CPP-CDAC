#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    int dup = num;
    int reverseNum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    if (dup == reverseNum)
    {
        cout << dup << " is a palindrome";
    }
    else
    {
        cout << dup << " is not a palindrome";
    }
}