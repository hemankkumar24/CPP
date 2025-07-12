#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Input a character" << endl;

    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "Character is a Capital Alphabet" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "Character is a lowercase Alphabet" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "Character is a number" << endl;
    }
}