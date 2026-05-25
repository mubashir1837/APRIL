#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of terms:";
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++){
        cout << a;
        if (i < n) cout << ", ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
    return 0;
}





