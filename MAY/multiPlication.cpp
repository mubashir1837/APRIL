#include<iostream>
using namespace std;

int main(){
    int num;
    int i = 1;
    cout << "Enter a number:";
    cin >> num;
    cout << "Multiplication tbale of" << "num" << "using while loop:" << endl;

    while(i<=10){
        cout << num << "x" << i << "=" << num * i << endl;
        i++;
    }

}