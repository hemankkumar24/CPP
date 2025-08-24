#include <iostream>
using namespace std;

int main()
{
    cout << "Input the number of rows";
    int rows;
    cin >> rows;

    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*" << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
