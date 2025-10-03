#include <iostream>
using namespace std;
void valueChanging(int *ptr)
{
    *ptr = 20;
}
int main()
{
    int a = 10;
    cout << "Before updation of the value:" << a << endl;
    valueChanging(&a);
    cout << "The value after updation in the function:" << a << endl;
}