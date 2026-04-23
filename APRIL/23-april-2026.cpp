#include <iostream>
using namespace std;

int main() {
   int age;
    
   cout<< "Enter your age:" << endl;
   cin >> age;

   if (age >= 18){
    cout <<"you can get liscense" << endl;
   } else{
    cout << "you can get liscen" << endl;
   }

   // 

   float temperature;
   cout << "Enter the temperaure in Celsius";
   cin >> temperature;

   if (temperature > 0) {
    cout << "The temperature is above freezing.";
   }

    return 0;
}