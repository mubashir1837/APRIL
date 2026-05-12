#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter and Alphabet:";
    cin >> character;

    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'a' || character == 'e' || character == 'i' | character == 'o' | character == 'u')
    {
        cout << "The Alphabet is vowel";
    }
    else
    {
        cout << "The Alphabet is Consonant";
    }
    return 0;
}