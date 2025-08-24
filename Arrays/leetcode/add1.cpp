#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
    {
    vector <int> digits(1); cout << "Input all the elements: \n";
    int size = 1; for(int i = 0; i < size; i++ ) { cin >> digits[i]; }

    if(digits[size-1] != 9)
    {
        digits[size-1] += 1;
    }
    else
    {
        int number_of_nine = 0; int i = 1;
        while(digits[size-i] == 9)
        {
            number_of_nine++;
            i++;
        }
        
        digits[size-number_of_nine] += 1;
        for(int i = size-number_of_nine+1; i < size; i++)
        {
            digits[i] = 0;
        }

        digits.push_back(0);
    }

    for(int i = 0; i < digits.size(); i++ )
    {
        cout << digits[i] << " ";
    }
    }