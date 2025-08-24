#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    cout << "Input Size of the Array" << endl;
    int size; cin >> size;

    cout << "Input Elements in the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Reversed Array: " << endl;
    for(int i = 0; i < (size/2); i++)
    {
        int temp = arr[size - i - 1];
        arr[size - i - 1] = arr[i];
        arr[i] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}