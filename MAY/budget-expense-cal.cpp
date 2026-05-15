#include <iostream>
using namespace std;

int main()
{
    double budget;
    double rent, groceries, utilities;
    double transportation, micellaneous;
    double totalExpenses, averageDailyExpense;

    cout << "Enter your monthly budget:";
    cin >> budget;

    cout << "Enter rent Expense:";
    cin >> rent;

    cout << "Enter groceries expense:";
    cin >> groceries;

    cout << "Enter utilities expense:";
    cin >> utilities;

    cout << "Enter micellaneous expense";
    cin >> micellaneous;

    totalExpenses = rent + groceries + utilities + transportation + micellaneous;
    averageDailyExpense = totalExpenses / 30;

    cout << "Total monthly Expenses =" << totalExpenses << endl;

    cout << "Average Daily Expense =" << averageDailyExpense << endl;

    if (totalExpenses > budget)
    {
        cout << "Warning: Expenses exceed your buget!";
    }
    return 0;
}