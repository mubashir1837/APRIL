#include<iostream>
using namespace std;

int main(){
    string name, address, degree;
    int rollNumber, age, numCourses;
    string course1, course2, course3;

    cout << "Enter the name of student:" << endl;
    cin >> name;
    cout << "Enter roll Number:" << endl;
    cin >> rollNumber;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Degree Program: ";
    cin >> degree;
    cout << "Enter Number of Courses Enrolled: ";
    cin >> numCourses;
    cout << "Enter Course 1: ";
    cin >> course1;
    cout << "Enter Course 2: ";
    cin >> course2;
    cout << "Enter Course 3: ";
    cin >> course3;

    cout << "\n===== Students Information System =====\n";
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Degree Program: " << degree << endl;

    cout << "Courses Enrolled:\n";
    cout << "1. " << course1 << endl;
    cout << "2. " << course2 << endl;
    cout << "3. " << course3 << endl;
    cout << "================================\n";

    return 0;
}
