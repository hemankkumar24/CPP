#include <iostream>
#include <climits>
using namespace std;
int findpeak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int highest = INT_MIN;

    while(start <= end)
    {
        if(arr[mid] > highest)
        {
            highest = arr[mid];
        }
        if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else if(arr[mid] >= arr[mid+1])
        {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }

    return highest;
}

int main()
{
    int arr[100], size; cout << "Input size of the array: \n"; cin >> size;
    cout << "Input Elements: \n"; for(int i = 0; i < size; i++) { cin >> arr[i]; }
    int highest = findpeak(arr, size);
    cout << "The largest integer is: " <<highest;
}