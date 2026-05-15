#include<iostream>
using namespace std;
int main(){
    float celsius, fahrenheit;

    cout << "Enter temperature in C:";
    cin >> celsius;

    fahrenheit = 9.0/5.0 * celsius + 32;

    cout << "Temperature in fahrenheit is: " << fahrenheit << endl;
}