#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number:";
    cin >> num1;

    cout << "Enter Operator (+, -, *, /)";
    cin >> op;

    cout << "Enter second number:";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Reult =" << num1 + num2;
        break;
    case '-':
        cout << "Reult =" << num1 - num2;
        break;
    case '*':
        cout << "Reult =" << num1 * num2;
        break;
    case '/':
        cout << "Reult =" << num1 / num2;
        break;
    default:
        cout << "Invalid Operator";
    }

    return 0;
}