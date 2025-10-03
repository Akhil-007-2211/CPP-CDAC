#include <iostream>
#include <iomanip> // for setw
using namespace std;

int main()
{   
    int n;
    cout<<"Enter how many rows:";
    cin>>n;
    int triangle[n][n] = {0}; // large enough

    triangle[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        cout << "\n";

        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            cout << setw(4) << triangle[i][j]; // format width
        }
    }

    return 0;
}
