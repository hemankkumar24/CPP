#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    cout << "Input amount: " << endl;

    int amount, current, notes100 = 0, notes50 = 0, 
    notes20 =0, notes1 = 0;

    cin >> amount;

    while(amount != 0){

    if (amount / 100 >= 1)
    {
        current = 100;
    }
    else if (amount / 50 >= 1)
    {
        current = 50;
    }
    else if (amount / 20 >= 1)
    {
        current = 20;
    }
    else if (amount / 1 >= 1)
    {
        current = 1;
    }
    else
    {
        current = 0;
    }

    switch(current)
    {
        case (100):
        {
            amount -= 100;
            notes100++;
            break;
        }
        case (50):
        {
            amount -= 50;
            notes50++;
            break;
        }
        case (20):
        {
            amount -= 20;
            notes20++;
            break;
        }
        case (1):
        {
            amount -= 1;
            notes1++;
            break;
        }
    }
}
    cout << "100 notes :" << notes100 << endl;
    cout << "50 notes :" << notes50 << endl;
    cout << "20 notes :" << notes20 << endl;
    cout << "1 notes :" << notes1 << endl;

}