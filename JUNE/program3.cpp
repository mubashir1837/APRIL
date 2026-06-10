#include <iostream>
using namespace std;

int main()
{
    char choice = 'n';

    while(choice != 'y')
    {
        cout << "Enter y to continue: ";
        cin >> choice;
    }

    cout << "You entered y.";

    return 0;
}