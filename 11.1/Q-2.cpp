#include <iostream>
using namespace std;
int main()
{
    int i, j, r, c, n = 0;
    int arr[1000][1000];
    cout << "Enter the array row size :- ";
    cin >> r;
    cout << "Enter the array column size :- ";
    cin >> c;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter the elements array[" << i << "][" << j << "] :- ";
            cin >> arr[i][j];
            if (n < arr[i][j])
            {
                n = arr[i][j];
            }
        }
    }
    cout << "Maximum element in the array is :- " << n << endl;

    return 0;
}