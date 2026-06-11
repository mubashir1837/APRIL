#include <iostream>
using namespace std;

int main()
{
    int accountBalance = 50000;
    char profession;
    int transactionAmount;
    int continueProgram = 1;

    cout << "===== Welcome to GIKI Joint Account =====" << endl;

    while (continueProgram != 0)
    {
        cout << "\nSelect Your Profession:" << endl;
        cout << "A. Assistant Professor" << endl;
        cout << "B. Lecturer" << endl;
        cout << "C. Engineer" << endl;

        cout << "Enter Profession (A/B/C): ";
        cin >> profession;

        cout << "Enter amount to transact: ";
        cin >> transactionAmount;

        if (profession == 'A')
        {
            if (transactionAmount <= 25000)
            {
                accountBalance -= transactionAmount;
                cout << "Transaction Successful!" << endl;
                cout << "Remaining Balance: " << accountBalance << endl;
            }
            else
            {
                cout << "Assistant Professor can transact maximum 25000." << endl;
            }
        }
        else if (profession == 'B')
        {
            if (transactionAmount <= 20000)
            {
                accountBalance -= transactionAmount;
                cout << "Transaction Successful!" << endl;
                cout << "Remaining Balance: " << accountBalance << endl;
            }
            else
            {
                cout << "Lecturer can transact maximum 20000." << endl;
            }
        }
        else if (profession == 'C')
        {
            if (transactionAmount <= 10000)
            {
                accountBalance -= transactionAmount;
                cout << "Transaction Successful!" << endl;
                cout << "Remaining Balance: " << accountBalance << endl;
            }
            else
            {
                cout << "Engineer can transact maximum 10000." << endl;
            }
        }
        else
        {
            cout << "Invalid Profession!" << endl;
        }

        cout << "\nPress 1 to Continue or 0 to Exit: ";
        cin >> continueProgram;
    }

    cout << "\nThank You for Using GIKI Joint Account!" << endl;

    return 0;
}