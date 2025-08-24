#include <iostream>
using namespace std;
int main()
{
    int size; cout << "Input Size: " << endl; cin >> size; int arr[100] = {0};
    for ( int i = 0; i < size; i++ ) { cin >> arr[i]; }

    cout << "Enter the sum you want to find: " << endl; int pair; 
    cin >> pair;

    for( int i = 0; i < size; i++)
    for( int j = i + 1; j < size; j++)
    for( int k = j + 1; k < size; k++)
    {
        if((arr[i] + arr[j] + arr[k]) == pair)
        {
            cout << arr[i] << " + " << arr[j] << " + " << arr[k] << " = " << pair << endl;
        }
    }
}