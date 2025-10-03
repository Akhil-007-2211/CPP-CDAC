#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == vowels[j])
            {
                count++;
            }
        }
    }
    cout << "Number of vowels in the string " << str << " is :" << count;
}