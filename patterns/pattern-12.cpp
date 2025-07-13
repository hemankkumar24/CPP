#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows :" << endl;
    cin >> rows;

    int i = 0;
    while(i < rows)
    {   
        int j = 0;
        char ch = 64 + rows - i;
        while(j <= i)
        {
        cout << ch << " ";
        ch += 1;
        j += 1;
        }
        cout << endl;
        i += 1;
    }
}