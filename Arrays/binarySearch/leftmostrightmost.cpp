#include <iostream>
using namespace std;

int leftmost(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while( start <= end )
    {
        if(arr[mid] == num)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > num)
        {
            end = mid - 1;
        }
        else if(arr[mid] < num)
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int rightmost(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int ans = -1;

    while( start <= end )
    {
        if(arr[mid] == num)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > num)
        {
            end = mid - 1;
        }
        else if(arr[mid] < num)
        {
            start = mid + 1;
        }

        mid = (start + end)/2;
    }
    return ans;
}

int main() // find leftmost occurance and right most occurance of the same number using binary search
{
    int arr[100]; int size; cout << "Input Size and Elements of the Array: " << endl;
    cin >> size; for(int i = 0; i < size; i++) { cin >> arr[i]; } cout << "Input num you want to find: \n"; 
    int num; cin >> num;

    int value_left = leftmost(arr, size, num);
    int value_right = rightmost(arr, size, num);

    cout << value_left << " " << value_right; 
}