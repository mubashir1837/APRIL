#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter Year";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "This is leap Year";
    }
    else
    {
        cout << "This is not a leap year";
    }
    return 0;
}