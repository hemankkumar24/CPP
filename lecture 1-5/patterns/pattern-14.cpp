#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows : " << endl;

    cin >> rows;

    int i = 0;
    while(i <= rows)
    {
        int spaces = i;
        while(spaces!=0)
        {
            cout << " ";
            spaces -= 1;
        }

        int stars = rows - i;
        while(stars!=0)
        {
            cout << "*";
            stars -= 1;
        }

        cout << endl;
        
        i += 1;
    }
}