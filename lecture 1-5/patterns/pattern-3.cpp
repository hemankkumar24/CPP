#include <iostream>
using namespace std;

int main()
{
    cout << "enter number of rows: " << endl;
    int n;
    cin >> n;
    int t = 1;
    int x = 1;
    while (t <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << x << " ";
            j += 1;
            x += 1;
        }
        cout << endl;
        t += 1;
    }
}