#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for ( int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size, arr[100]; cout << "Input size of the array: " << endl;
    cin >> size; cout << "Input elements in the array: " << endl; 
    for ( int i = 0; i < size; i++ ) { cin >> arr[i]; }

    int start = 0; int end = size - 1;

    int step = 0;
    while(start < end)
    {
        while(start < size && arr[start] == 0)
        {
            start += 1;
        }
        while(end >= 0 && arr[end] == 2)
        {
            end -= 1;
        }

        if((arr[start] == 1 || arr[start] == 2) && arr[end] == 0)
        swap(arr[start], arr[end]);

        if(arr[start] == 2 && arr[end] == 1)
        swap(arr[start], arr[end]);

        cout << "Step " << step << endl;
        printArray(arr, size);
        step += 1;

        start++;
        end--;
    }
}