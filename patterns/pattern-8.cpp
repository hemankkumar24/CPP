#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: " << endl;
    int rows;
    cin >> rows;

    int i = 0;
    char ch = 65;
    while (i < rows)
    {
        int j = 0;
        ch = ch + i;
        while (j < rows)
        {
            cout << ch;
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}