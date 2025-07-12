#include<iostream>
using namespace std;

int main()
{
    cout << "Input the number of rows";
    int rows;
    cin >> rows;

    int count = 1;
    int i = 1;
    while(i <= rows)
    {
        int j = 1;
        while(j <= i)
        {
            cout << count << " ";
            j += 1;
            count += 1;
        }
        cout << endl;
        i += 1;
    }
}