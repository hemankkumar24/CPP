#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums(10); cout << "Input all the elements" << endl;
    for(int i = 0; i < nums.size(); i++) { cin >> nums[i]; }
    cout << "Input the element you want to remove" << endl; int element;
    cin >> element; int i = 0; 
    for(int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != element)
        {
            nums[i] = nums[j];
            i++;
        }
    }

    cout << "Final Array" << endl;
    for(int i = 0 ; i < nums.size(); i ++)
    {
        cout << nums[i] << " ";
    }
}