#include <iostream>
using namespace std;
int main()
{
    cout << "Enter array size and then its elements: " << endl;
    int size; int arr[100]; cin >> size;
    for ( int i = 0; i < size; i++ ) { cin >> arr[i]; }

    cout << "Input the pair sum you want: " << endl;
    int pair; cin >> pair;

    for(int i = 0; i < size; i++)
    for(int j = i+1; j < size; j++)
    {
        if ((arr[i]+arr[j]) == pair)
        cout << arr[i] << " + " << arr[j] << " = " << pair << endl;
    }
}
