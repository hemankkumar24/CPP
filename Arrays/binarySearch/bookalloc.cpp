#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int students)
{
    int studentCount = 1;
    int pages = 0;

    for(int i = 0; i < size; i++)
    {
        if((pages + arr[i]) <= mid)
        {
            pages += arr[i];
        }
        else
        {
            studentCount += 1;
            if (studentCount > students || arr[i] > mid)
            {
                return false;
            }
            pages = arr[i];
        }
    }

    return true;
}

int main()
{
    int arr[100]; int size; cout << "Input Size: \n"; cin >> size;
    cout << "Input Elements: \n"; for( int i = 0; i < size; i++ ) { cin >> arr[i]; }
    int students; cout << "Input Students: \n"; cin >> students;

    int start = 0, end = 0, mid;
    for(int i = 0; i < size; i++) { end += arr[i]; }
    mid = start + (end - start)/2; int ans = -1;

    while (start <= end)
    {
        if(isPossible(arr, size, mid, students))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2 ;
    }
    cout << "The minimum that can be given to each student is : " << ans;
}