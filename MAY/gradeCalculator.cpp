#include <iostream>
using namespace std;

int main()
{

    int subject1, subject2, subject3;
    int subject4, subject5, subject6;

    int total;
    double percentage;

    cout << "Enter marks of all 6 subjects: ";

    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5 >> subject6;

    total = subject1 + subject2 + subject3 +
            subject4 + subject5 + subject6;

    percentage = (total / 600.0) * 100;

    if (percentage >= 90 && percentage <= 100)
    {
        cout << "Your grade is A";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Your grade is B";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Your grade is C";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Your grade is D";
    }
    else
    {
        cout << "You are Fail";
    }

    cout << endl;

    cout << "Total = " << total << endl;

    cout << "Percentage = "
         << percentage << "%" << endl;

    return 0;
}