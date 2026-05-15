#include <iostream>
using namespace std;

int main()
{
    int math, physics, computer;
    double average;

    cout << "Enter marks of Mathematics: ";
    cin >> math;
    cout << "Enter marks of Physics: ";
    cin >> physics;
    cout << "Enter marks of Computer: ";
    cin >> computer;

    if (math > 40 && physics > 40 && computer > 40){
        average = (math + physics + computer) / 3.0;
        cout << "Average Marks = " << average << endl;
        if (average > 85){
            cout << "Grade A" << endl;
        } else if (average >= 70 && average <= 85){
            cout << "Grade B" << endl;
        } else {
            cout << "Grade C" << endl;
        }
    }
    else {
        cout << "Fail in at least one subject" << endl;
    }
    return 0;
}















