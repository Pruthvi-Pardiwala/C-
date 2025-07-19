#include <iostream>
using namespace std;

/*
Alogithm:

step 1 : start
Step 2 : initialise variable sum with 0
step 3 : input the num
step 4 : Extract the lastdigit of num(lastdigit = num % 10)
step 5 : repeat step 6 until num is greater than or equal to 10
step 6 : Remove the lastdigit from num (num = num /10)
step 7 : assign num to firstdigit
step 8 : calculate and print sum as the sum of firstdigit and last digit
step 7 : end
*/
int main()
{

    int num, sum = 0, lastDigit, firstDigit;

    cout << "Enter num :- ";
    cin >> num;

    lastDigit = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;

    cout << "Sum of firstdigit and lastdigit number is :- " << sum << endl;
    return 0;
}

// output:
// Enter num : 456
// sum of lastdigit and firstdigit number is : 10