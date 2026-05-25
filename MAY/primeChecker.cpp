#include <iostream>
using namespace std;
int main()
{
    int number;
    bool isPrime = true;
    cout << "Enter a number:";
    cin >> number;

    if (number <= 1)
        isPrime = false;

    for (int i = 2; i * i <= number; i++){
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    } 
    if (isPrime){
        cout << number << " is prime number";
    } else {
        cout << number << " is not prime number";
    }
    return 0;
}
