#include<iostream>
using namespace std;

int main()
{
    char count = 64;
    cout << "Enter Number of Rows" << endl;

    int rows;
    cin >> rows;

    int i = 0;
    while(i < rows)
    {
        int j = 0;
        while(j < rows)
        {
            count += 1;
            cout << count;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}