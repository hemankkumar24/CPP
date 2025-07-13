#include <iostream>
using namespace std;
int main()
{
    int rows;

    cout << "Enter the number of rows :";
    cin >> rows;

    int i = 1;
    while (i <= rows)
    {
        int j = i;
        while (j <= rows)
        {
            cout << j << " ";
            j += 1;
        }

        j = (i - 1) * 2;
        while (j > 0)
        {
            cout << "*" << " ";
            j -= 1;
        }

        j = rows;
        while (j >= i)
        {
            cout << j << " ";
            j -= 1;
        }

        cout << endl;
        i += 1;
    }
}
