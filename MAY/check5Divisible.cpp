#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number:" << endl;
    cin >> number;

    if (number % 5 == 0)
    {
        cout << "Number is divisible by 5" << endl;
    }
    else
    {
        cout << "Number is not divisible by 5" << endl;
    }
}