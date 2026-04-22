/* Type Casting is the process of converting a variable from one data type to another data type (for example: integer to float, float to int, or string to int) either automatically or manually.It is mainly used when we want to perform operations between different data types or when we need data in a specific format. */

#include <iostream>
using namespace std;
int main()
{
    // Automatic Type Casting (Implicit)

    /* Implicit type casting is when the compiler automatically converts one data type into another without user intervention. */
    int a = 10;
    float b = 15.5;

    float result = a + b; // int automatically becomes float
    cout << "Result\n"
         << result << endl;

    /*Explicit type casting is when the programmer manually converts one data type into another using casting operators.*/

    float x = 9.8;
    int y = (int)x;
    cout << "y =" << y;

    return 0;
}