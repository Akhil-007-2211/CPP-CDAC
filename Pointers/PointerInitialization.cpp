#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int *ptr = &a;
    cout << "Value of the variable:" << *ptr<<endl;
    cout << "Address of the variable:" << ptr<<endl;
}