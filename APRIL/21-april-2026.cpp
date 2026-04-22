#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter the age of user:" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "This person can vote" << endl;
    }
    else
    {
        cout << "This person can not vote:" << endl;
    }

    return 0;
}
