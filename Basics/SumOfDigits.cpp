#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    //int dup = num;
    cout << "Enter a number:";
    cin >> num;
    int dup = num;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    cout << "Sum of digits of " << dup << " : " << sum;
}