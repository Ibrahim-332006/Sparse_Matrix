#include <iostream>
using namespace std;
int main()
{
    int matrix[4][5] = {{0, 0, 3, 0, 4},
                        {0, 0, 5, 7, 0},
                        {0, 0, 0, 0, 0},
                        {0, 2, 6, 0, 0}};

    int n = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] != 0)
            {
                n++;
            }
        }
    }

    int matrex2[3][6];
    int k = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (matrix[i][j] != 0)
            {
                matrex2[0][k] = i;
                matrex2[1][k] = j;
                matrex2[2][k] = matrix[i][j];
                k++;
            }
        }
    }

    for (int m = 0; m < 3; m++)
    {
        for (int t = 0; t < 6; t++)
        {
            cout << matrex2[m][t] << " ";
        }
        cout << endl;
    }
}