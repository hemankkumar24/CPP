#include <iostream>
using namespace std;

void searchArray(int arr[], int size, int element)
{
    int flag = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            flag += 1;
            cout << "Element found at " << i << "th index"<< endl;
        }
    }
    if (flag == 0)
    cout << "Element Not Found" << endl;
}

int main()
{
    int arr[100];
    cout << "Input Size of Array: " << endl;
    int size; cin >> size;

    cout << "Input the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Input the element you want to find: " << endl;
    int element; cin >> element;

    searchArray(arr, size, element);
    return 0;
}