#include <iostream>
using namespace std;

int main()
{
    int units;
    double bill, surcharge;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100){
        bill = units * 5;
    } else if (units <= 300){
        bill = (100 * 5) + ((units - 100) * 7);
    } else{
        bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);
    } if (bill > 2000){
        surcharge = bill * 0.10;
        bill = bill + surcharge;
    }

    cout << "Total Electricity Bill = Rs. " << bill << endl;

    return 0;
}



