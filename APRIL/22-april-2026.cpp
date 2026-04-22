#include <iostream>
using namespace std;

int main()
{
    float subject1, subject2, subject3, subject4, subject5, subject6, total, percentage;

    cout << "Enter marks for 6 subjects:" << endl;
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5 >> subject6;

    total = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;
    percentage = (total / 600) * 100;

    cout << "Total marks:" << total << endl;
    cout << "Percentage:" << percentage << "%" << endl;

    if (percentage > 90)
    {
        cout << "Grade: A+" << endl;
    }
    else
    {
        if (percentage > 80)
        {
            cout << "Grade: B+" << endl;
        }
        else
        {
            if (percentage > 70)
            {
                cout << "Grade: C" << endl;
            }
            else
            {
                if (percentage > 60)
                {
                    cout << "Grade: B" << endl;
                }
                else
                {
                    if (percentage > 55)
                    {
                        cout << "Grade: C" << endl;
                    }
                    else
                    {
                        if (percentage > 50)
                        {
                            cout << "Grade: D" << endl;
                        }
                        else
                        {
                            cout << "Fail" << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}