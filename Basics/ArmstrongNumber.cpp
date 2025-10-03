#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    int dup = num;
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    num = dup;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, count);
        num /= 10;
    }
    if (sum == dup)
    {
        cout << dup << " is armstrong number";
    }
    else
    {
        cout << dup << " is not armstrong number";
    }
}