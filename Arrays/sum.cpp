#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    cout << "Input the size of the array: " << endl;
    int size; cin >> size;

    cout << "Input values in the array: "<< endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "Final sum: " << sum << endl;


    return 0;
}