#include <iostream>
using namespace std;

int main()
{
    int luckyNum;

    cout << "Enter your valid  lucky number:";
    cin >> luckyNum;

    switch (luckyNum)
    {
    case 1:
        cout << "Congratulations you won a refrigerator in lucky draw!";
        break;
    case 2:
        cout << "Congratulations you won an Air Conditioner in lucky draw!";
        break;
    case 3:
        cout << "Congratulations you won an Ovan machine in lucky draw!";
        break;
    case 4:
        cout << "Congratulations you won a Car in lucky draw!";
        break;

    default:
        cout << "Better luck next time! ";
        break;
    }
    return 0;
}