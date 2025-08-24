#include<iostream>
using namespace std;

int main()
{
    cout << "Input the number of rows" << endl;

    int rows;

    cin >> rows;

    int i = 0;
    while(i<rows)
    {   
        int number = rows - i;
        int j = 1;
        while(j<=rows)
        {
            cout << number;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}