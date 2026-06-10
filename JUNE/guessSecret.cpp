#include <iostream>
using namespace std;

int main()
{
    int guess;
    int secret = 7;
    do
    {
        cout << "Guess the Secret number between 1-10:";
        cin >> guess;
    } while (guess != secret);
    cout << "You guessed it right!" << endl;
    return 0;
}