#include <iostream>
using namespace std;
int main()
{
    /*for (int i = 1; i <= 3; i++){ // Outer loop for rows
        for (int j = 1; j <= 5; j++){ // Inner loop for columns
            cout << "* ";
        } cout << endl;
    } */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}