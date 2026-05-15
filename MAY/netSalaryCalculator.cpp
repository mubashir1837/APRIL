#include <iostream>
using namespace std;

int main()
{
    int grade;
    double basicSalary;
    double hra = 0;
    double medical = 0;
    double travel = 0;
    double govt = 0;

    double netSalary;

    cout << "Enter employee grade";
    cin >> grade;

    cout << "Enter basic salary";
    cin >> basicSalary;

    if (grade < 1 || grade > 22){
        cout << "Invalid grade";
    }
    else if (basicSalary < 10000){
        hra = 0;
        medical = 0;
        travel = 0;
        govt = 0;
    }
    else if (grade >= 1 && grade <= 5) {
        hra = basicSalary * 0.25;
        medical = basicSalary * 0.15;
        travel = basicSalary * 0.10;
        govt = basicSalary * 0.12;
    }
    else if (grade >= 6 && grade <= 12){
       hra = basicSalary *  0.20;
       medical = basicSalary * 0.10;
       travel = basicSalary * 0.07;
       govt = basicSalary * 0.10;

       if (basicSalary > 50000){
        hra = hra + (basicSalary * 0.05);
       }
    } else if (grade >=13 && grade <= 17){
      hra =basicSalary * 0.10;
      medical = basicSalary * 0.08;
      travel = basicSalary * 0.05;
      govt = basicSalary * 0.08;
      if (basicSalary > 50000){
        hra = hra + (basicSalary * 0.05);
      }
    } else if(grade >=18 && grade <= 22){
        hra = basicSalary * 0.10;
        medical = basicSalary * 0.05;
        travel = basicSalary * 0.03;
        govt = basicSalary * 0.05;
    }

    netSalary = basicSalary + hra + medical + travel + govt;
    
    cout << "Basic Salary =" << basicSalary << endl;
    cout << "Housing Rent Allwance = " << hra << endl;
    cout << "Medical Allowance = " << medical << endl;
    cout << "Travel Allowance = " << travel << endl;
    cout << "Government rules allowance = " << govt << endl;
    cout << "Net Salary = " << netSalary << endl;
    
}