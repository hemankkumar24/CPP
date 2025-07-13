#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Input the number of rows :" << endl;

    cin >> rows;

    int i = 1;
    while (i <= rows)
    {
        int spaces = rows - i;
        while (spaces != 0)
        {
            cout << " ";
            spaces -= 1;
        }
        int j = rows - (rows - i);
        while (j != 0)
        {
            cout << "*";
            j -= 1;
        }
        i += 1;
        cout << endl;
    }
}