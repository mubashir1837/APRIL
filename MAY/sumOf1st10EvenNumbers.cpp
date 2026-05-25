#include <iostream> 
using namespace std; 

int main() { 
    int sum = 0, count = 0, num = 2; 

    while (count < 10) { 
        sum += num; 
        num += 2; 
        count++; 
    } 
    cout << "Sum of first 10 even numbers: " << sum << endl; 
    return 0; 
}
