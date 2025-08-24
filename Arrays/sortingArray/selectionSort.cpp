#include <iostream>
using namespace std;

int main()
{
    int arr[100]; int size; cout << "Input size of the array: \n"; cin >> size;
    cout << "Input Elements: \n"; for( int i = 0; i < size; i++ ) { cin >> arr[i]; }

    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }

    cout << "New array: \n";
    for(int i = 0; i < size; i++ ) { cout << arr[i] << " ";}

    return 0;
}