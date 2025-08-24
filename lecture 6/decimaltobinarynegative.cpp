#include <iostream>
using namespace std;

int main()
{
    cout << "Input a negative number" << endl;
    
    int num;
    cin >> num;
    int i = 31;
    while(i!=0)
    {
        int bit = (num >> i) & 1;
        cout << bit;
        i--;
    }
}