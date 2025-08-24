#include <iostream>
using namespace std;

int main()
{
    cout << "Input the number of rows" << endl;
    int rows;

    cin >> rows;
    int num = 1;

    while (num <= rows)
    {
        int num2 = 1;
        while (num2 <= rows)
        {
            cout << num << " ";
            num2 += 1;
        }
        cout << endl;
        num += 1;
    }
}