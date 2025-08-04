#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the array space:- ";
    cin >> n;

    int arr[n];
    cout << "Enter array element :- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "A[" << i << "] :- ";
        cin >> arr[i];
    }
    cout << "--------------------------" << endl;
    cout << "Negative element from Array :- ";
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}