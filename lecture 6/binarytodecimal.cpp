#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a binary number" << endl;

    int num;

    cin >> num;
    int power = 0;
    int actualnum = 0;
    while ( num != 0)
    {
        int digit = num % 10;
        actualnum += pow(2,power) * digit;
        num /= 10;
        power++;
    }
    cout << "The number is  :" << actualnum;
}