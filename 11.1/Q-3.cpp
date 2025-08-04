#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the array's row & column size: ";
    cin >> row;

    col = row;

    int a[row][col], transpose[row][col];

    cout << "Enter array's elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
            // scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // printf("The transpose matrix of an array:\n");
    cout << "The transpose matrix of an array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // printf("%d ", transpose[i][j]);
            cout << transpose[j][i] << " ";
        }
        // printf("\n");
        cout << endl;
    }

    return 0;
}