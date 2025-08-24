#include <iostream>
using namespace std;
int main()
{
    cout << "Input a number : " << endl;

    int num;
    cin >> num;
    int binary = 0;
    int power = 1;
    while(num!=0)
    {
        int bit = num & 1;
        binary = (bit * power) + binary;
        power *= 10;
        num = num >> 1;
    }

    cout << binary << endl;
}