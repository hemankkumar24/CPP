#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size; cout << "Input Size Of The Array: " << endl; cin >> size;

    cout << "Input Elements in the Array" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Swapping Alternates" << endl;
    for(int i = 0; i < size; i += 2)
    {
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }

    cout << "Printing Elements" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
