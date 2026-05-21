#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter 1st number:";
    cin >> num1;

    cout << "Enter 2nd number:";
    cin >> num2;

    cout << "Enter and operator (+, -, *, /):";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid Operator";
        break;
    }

    return 0;
}