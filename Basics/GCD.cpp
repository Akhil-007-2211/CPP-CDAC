#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers for GCD:";
    cin >> a >> b;
    int range;
    int gcd;
    if (a < b)
    {
        range = a;
    }
    else
    {
        range = b;
    }
    for (int i = 1; i <= range; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD of two numbers " << a << " and " << b << " : " << gcd;
}