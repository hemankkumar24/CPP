#include <iostream>
using namespace std;

bool evenorodd(int num)
{
    if (num%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    
int main()
{
    cout << "input your number: ";
    int num;cin >> num;

    bool checkEven;

    checkEven = evenorodd(num);
    if(checkEven == true)
    {
        cout << endl << "The number is even" << endl;
    }
    else
    {
        cout << endl << "The number is odd" << endl;
    }
}