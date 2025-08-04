#include <iostream>
using namespace std;
int main()
{
    int i, j, r, c, n = 0,ch;
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
        }
    }

    do
    {
        cout << "Enter the row number :- ";
        cin >> r;

        cout << "Elements of the Rows are :- ";
        for (i = 0; i < c; i++)
        {
            cout << arr[r][i] << " ";
            n += arr[r][i];
        }
        cout << endl << "Sum of Elements of the Rows are :- ";
        cout << n << endl;
        cout <<"0 for exit" << endl;
        cout <<"1 for retry" << endl;
        cout <<"Enter your choice to continue (1/0) :- ";
        cin >> ch;
    } while (ch!=0);
}