#include <iostream>
#include <climits>

using namespace std;
int main()
{
    cout << "Input first array size: " << endl; int size1; cin >> size1;
    cout << "Input all the elements: " << endl; int arr1[100];
    for ( int i = 0; i<size1; i++)  { cin >> arr1[i]; }
    cout << "Input second array size: " << endl; int size2; cin >> size2;
    cout << "Input all the elements: " << endl; int arr2[100];
    for ( int i = 0; i<size2; i++)  { cin >> arr2[i]; }

    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN; 
            }
        }
    }

    for (int i =0; i < size2; i++)
    {
        cout << "The second array is now: \n" << arr2[i];
    }
}