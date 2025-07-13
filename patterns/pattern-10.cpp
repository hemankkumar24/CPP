#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter number of rows" << endl;

    cin >> rows;

    int i = 0;
    char ch = 65;

    while (i < rows)
    {
        ch = ch + i;
        int j = 0;
        while (j < rows)
        {
            char printch = ch + j;
            cout << printch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}