#include <iostream>
using namespace std;
int fact(int num)
{
    if ( num == 0 )
    {
        return 1;
    }
    else
    {
        int factorial = 1;
        for(int i = 1 ; i <= num ; i++)
        {
            factorial *= i;
        }

        return factorial;
    }
}

int main()
{
    cout << "Enter n and r" <<endl;
    int n, r; cin >> n >> r;

    if(r > n){cout << "invalid" << endl;}
    else
    {
        int ncr = (fact(n))/((fact(r))*(fact((n-r))));
        cout << "Your Combination is :" << ncr << endl;
    }
}