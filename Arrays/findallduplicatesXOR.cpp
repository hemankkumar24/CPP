#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size; cout << "Input the size of the array:" << endl; cin >> size;

    cout << "Input the elements in the array" << endl;
    for( int i = 0 ; i < size ; i++ )
    {
        cin >> arr[i];
    }

    for ( int i = 0 ; i < size ; i++)
    {
        for ( int j = 0; j < size; j++)
        {
            if ( i == j)
            continue;
            
            if ( arr[i] == arr[j] )
            {
                cout << "The duplicate number is: " << arr[i];
            }
        }
    }


}