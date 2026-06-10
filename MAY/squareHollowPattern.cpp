#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter the size of square:";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <=n; j++){
    //         if(i == 1 || i == n || j == 1 || j == n){
    //             cout << "*";
    //         } else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    int size;
    cout << "Enter size of square";
    cin >> size;
    for (int i = 1; i <=size; i++){
        for(int j = 1; j <=size; j++){
            if (i == 1 || i == size || j == 1 || j == size){
                cout << "*";
            } else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}














