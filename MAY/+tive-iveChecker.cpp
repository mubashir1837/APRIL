#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number:" << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "The number is positive";
    }
    else
    {
        cout << "The Number is negative";
    }
    return 0;
}