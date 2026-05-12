#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Enter four numbers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        cout << "The Smallest Number is: " << num1;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num3)
    {
        cout << "The smallest number is:" << num2;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4)
    {
        cout << "The smallest number is:" << num3;
    }
    else
    {
        cout << "The smallest number is:" << num3;
    }
    return 0;
}