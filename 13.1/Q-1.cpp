#include <iostream>
using namespace std;
void add();
void subtract();
void multiply();
void divide();
void mod();

int main()
{
    int choice;
    do
    {
        cout << "Menu:- " << endl;
        cout << "Press 1 for Addition (+) " << endl;
        cout << "Press 2 for Subtraction (-) " << endl;
        cout << "Press 3 for Multiplication (*) " << endl;
        cout << "Press 4 for Division (/) " << endl;
        cout << "Press 5 for Modulus (%) " << endl;
        cout << "Press 0 for Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            mod();
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
    return 0;
}

void add()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter two number: ";
    cin >> b;
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
}

void subtract()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter two number: ";
    cin >> b;
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
}

void multiply()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter two number: ";
    cin >> b;
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
}

void divide()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter two number: ";
    cin >> b;
    if (b != 0)
    {
        cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    }
    else
    {
        cout << "Error! Division by zero is not allowed." << endl;
    }
}

void mod()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter two number: ";
    cin >> b;
    if (b != 0)
    {
        cout << "Modulus of " << a << " and " << b << " is " << a % b << endl;
    }
    else
    {
        cout << "Error! Division by zero is not allowed." << endl;
    }
}