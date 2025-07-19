#include <iostream>
using namespace std;

/*
Alogithm:

step 1 : start
Step 2 : initialise variable char ch with 'a'
step 3 : repeat step 4-6 until ch<='z'
step 4 : display the value of char
step 5 : increment by 4
step 6 : go to step 4
step 7 : end
*/

int main()
{

    char ch = 'a';

    do
    {
        cout << ch << " ";
        ch = ch + 4;
    } while (ch <= 'z');

    return 0;
}
// output:
// a e i m q u y