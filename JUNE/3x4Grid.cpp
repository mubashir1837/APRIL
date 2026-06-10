#include<iostream>
using namespace std;

int main(){
    int row = 0;

    while(row <= 3){
        int col = 0;
        while(col <=4){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}