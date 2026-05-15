#include <iostream>
using namespace std;

int main() {

    int num, factorial;

    cout << "Enter a number (1-5): ";
    cin >> num;
    
    if (num == 1) {
        factorial = 1;
    }
    else if (num == 2) {
        factorial = 2 * 1;
    }
    else if (num == 3) {
        factorial = 3 * 2 * 1;
    }
    else if (num == 4) {
        factorial = 4 * 3 * 2 * 1;
    }
    else if (num == 5) {
        factorial = 5 * 4 * 3 * 2 * 1;
    }
    else {
        cout << "Number out of range";
        return 0;
    }

    cout << "Factorial = " << factorial;

    return 0;
}