#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Input number of rows:" << endl;
    cin >> rows;

    int i = 1;
    while (i <= rows)
    {
        int f = 1;
        int placeholder = i;
        while (f <= i)
        {
            cout << placeholder << " ";
            placeholder -= 1;
            f += 1;
        }
        i += 1;
        cout << endl;
    }
}