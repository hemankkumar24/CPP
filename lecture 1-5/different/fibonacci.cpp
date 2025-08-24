#include <iostream>
using namespace std;

int main()
{
    int initial = 0;
    int second = 1;

    cout << "Enter number of Series you want : " << endl;
    int num;
    cin >> num;

    if (num == 0)
    {
        cout << initial;
    }
    else if (num == 2)
    {
        cout << initial << "," << second << ",";
    }
    else if (num > 2)
    {
        cout << initial << "," << second;
        for (int i = 2; i < num; i++)
        {
            int third = initial + second;
            cout << third << ",";
            initial = second;
            second = third;
        }
    }
}