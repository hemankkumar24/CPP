#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size; cout << "Input the size of the array \n";
    cin >> size;

    cout << "Input the elements of the array \n";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    
    for(int i = 0; i < size; i++)
    {
        int flag = 0;
        for(int j = 0; j<size; j++)
        {
            if((arr[i]) == (arr[j]))
            {
                flag += 1;
            }
        }

        if (flag == 1)
        {
            cout << arr[i] << " is the unique number";
            break;
        }
    }
}