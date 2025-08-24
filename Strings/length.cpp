#include <iostream>
using namespace std;
int main()
{
    cout << "Input String: " << endl;
    char ch[20]; cin >> ch; int length = 0;

    for( int i = 0; i < 20; i++ ) { 
        if (ch[i] == '\0') 
            break;
        length++;
    }

    cout << "The size of the string is: " << length << endl;
}