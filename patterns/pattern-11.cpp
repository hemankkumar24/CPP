#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Input the number of rows" << endl;

    cin >> rows;
    int i = 0;
    while (i < rows)
    {
        char ch = 65 + i;
        int j = 0;
        while (j <= i)
        {
            cout << ch << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}