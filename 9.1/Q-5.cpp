#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {
            cout << "  ";
        }
        for (int j = 6 - i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (int l = 4; l >= 6 - i; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}