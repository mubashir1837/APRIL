#include<iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}

void serveChai(int cups);

void serveChai(int cups){
    cout << "Serving" << cups << "cups" << "of chai";
}

int main(){
    int temp = checkTemperature(12);
    cout << temp << endl;
    serveChai(5);

    return 0;
}