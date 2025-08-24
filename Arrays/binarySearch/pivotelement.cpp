#include <iostream>
using namespace std;

int main()
{
    int arr[100]; int size; cout << "Input Size: \n"; cin >> size; 
    cout << "Input Elements: \n"; for(int i = 0; i < size; i++) { cin >> arr[i]; }
    int start = 0; int end = size - 1; int mid = (start + end)/2;

    while(start < end)
    {   
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start + end)/2 ;
    }

    cout << "Pivot element at index: " << end;
}