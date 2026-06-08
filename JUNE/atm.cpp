#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawAmount;
    double dailyLimit;
    cout << "Enter Account Balance: ";
    cin >> balance;
    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;
    cout << "Enter Daily Withdrawal Limit: ";
    cin >> dailyLimit;

    if (withdrawAmount <= balance){
        if (withdrawAmount <= dailyLimit){
            balance = balance - withdrawAmount;

            cout << "\nWithdrawal Successful!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
        else {
            cout << "\nError: Withdrawal amount exceeds daily limit." << endl;
        }
    }else {
        cout << "\nError: Insufficient balance." << endl;
    }
    return 0;
}