#include<iostream>
using namespace std;

void changeValue(int num){
    num = 100;
}

int main(){
   int x = 50;
   changeValue(x);
   cout << "Value of x = " << x << endl;
   return 0;
}






