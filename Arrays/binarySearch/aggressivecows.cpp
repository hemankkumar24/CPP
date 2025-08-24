#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "Input the size of the array" << endl; int arr[100];
    int size; cin >> size; cout << "Input elements in the array" << endl;
    for(int i = 0; i < size; i++) { cin >> arr[i]; }

    int maxi = INT_MIN; int min = 0;
    for(int i = 0; i < size; i++) { maxi = max(maxi, arr[i]); }
    cout << "\nThe Max number is : " << maxi << endl;

    int start = 0; int mid = start + (maxi - start)/2;
    while(start < maxi)
    {

    }
}