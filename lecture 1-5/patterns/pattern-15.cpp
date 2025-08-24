#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter the number of rows : ";

    cin >> rows;

    int i = 1;

    while(i <= rows)
    {
        // logic to print spaces
        int spaces = rows - i;
        while(spaces != 0)
        {
            cout << " ";
            spaces -= 1;
        }
        // logic to print the initial characters
        int j = 1;
        while(j <= i)
        {
            cout << j;
            j += 1;
        }
        // logic to print the baad wale characters
        j = i-1;
        while(j != 0)
        {
            cout << j;
            j -= 1;
        }

        cout << endl;
        i += 1;
    }
}