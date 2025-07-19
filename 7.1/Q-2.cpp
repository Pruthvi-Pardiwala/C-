#include <iostream>
using namespace std;

/*
Alogithm:

step 1 : start
Step 2 : initialise variable num, count with 0
step 3 : input the num
step 4 : repeat step  until num is greater than 0
step 5 : if num is divisible bu 10 then go to step 6 otherwise go to step 8
step 6 : increment of count by 1
step 7 : go to step 4
step 8 : display total number of count i.e count
step 9 : end
*/
int main()
{

    int num, count = 0;

    cout << "Enter num :- ";
    cin >> num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Total num :" << count;
    return 0;
}

// output:
// Enter num : 1234
// Total num : 4