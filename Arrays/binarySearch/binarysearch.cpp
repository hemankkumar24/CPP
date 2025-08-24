#include <iostream>
using namespace std;

int main(){

    cout << "Input the size and elements of the array: " << endl;
    int size; cin >> size; int arr[100];
    for(int i = 0; i<size; i++) { cin >> arr[i]; }

    cout << "Input what you want to find: " << endl; int num; cin >> num;
    int start = 0, end = size - 1;
    int mid = (start+end)/2, flag = 0;
    // if array is sorted in ascending order! 
    while(start <= end)
    {
        if(arr[mid] == num)
        {
            cout << num << " found at " << mid  << " index";
            flag += 1;
            break;
        }
        else if(arr[mid] < num)
        {
            start = mid + 1;
        }
        else if(arr[mid] > num)
        {
            end = mid - 1;
        }

        mid = (start+end)/2;
    }

    if (flag == 0)
    {
        cout << "Element not found! " << endl;
    }
}