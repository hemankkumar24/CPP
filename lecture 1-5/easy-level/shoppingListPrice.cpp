#include <iostream>
using namespace std;

int main()
{
    // Input Price
    int n = 0, sum = 0;
    while (n != -1)
    {
        cout << "Tell Price, 1 For Exitting" << endl;
        cin >> n;
        if (n == 1)
        {
            break;
        }
        else
        {
            sum += n;
        }
    }

    cout << "The final price is $" << sum << endl;
}