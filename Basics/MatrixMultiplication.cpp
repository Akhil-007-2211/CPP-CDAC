#include <iostream>
using namespace std;
int main()
{
    int row1, row2, column1, column2;
    cout << "Enter rows and columns of first matrix:";
    cin >> row1 >> column1;
    cout << "Enter rows and columns of second matric:";
    cin >> row2 >> column2;
    int matrix1[row1][column1];
    int matrix2[row2][column2];
    cout << "Enter matrix 1 elements:";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter matrix2 elements:";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "Matrix multiplication of two matrix1 and matrix2:";
    int matrix3[row1][column2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            matrix3[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << matrix3[i][j] << "  ";
        }
        cout << "\n";
    }
}