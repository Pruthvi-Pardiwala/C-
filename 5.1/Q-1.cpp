#include <iostream>
using namespace std;
int main()
{

    int num, grade;

    cout << "Enter Your Score :- ";
    cin >> num;

    if (num >= 80)
    {
        cout << "Your Grade is A." << endl;
        grade = 'A';
    }
    else if (num >= 70)
    {
        cout << "Your Grade is B." << endl;
        grade = 'B';
    }
    else if (num >= 60)
    {
        cout << "Your Grade is C." << endl;
        grade = 'C';
    }
    else if (num >= 40)
    {
        cout << "Your Grade is D." << endl;
        grade = 'D';
    }
    else
    {
        cout << "You Have Fail." << endl;
        grade = 'F';
    }

    // (num >= 80)
    //     ? cout << "Your Grade is A"
    //     : (num >= 70)
    //         ? cout << "Your Grade is B"
    //         : (num >= 60)
    //             ? cout << "Your Grade is C"
    //             : (num >= 40)
    //                 ? cout << "Your Grade is D"
    //                 : cout << "You Have Fail";
    //         ;
    //     ;
    // ;

    switch (grade)
    {
    case 'A':
        cout << "Excelent Work" << endl;
        break;
    case 'B':
        cout << "Well Done" << endl;
        break;
    case 'C':
        cout << "Good Job" << endl;
        break;
    case 'D':
        cout << "You Passed, but you could do better" << endl;
        break;
    default:
        cout << "Sorry, You Failed" << endl;
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulation! You are aligible for the next level";
    }
    else
    {
        cout << "Please try again next time";
    }
}