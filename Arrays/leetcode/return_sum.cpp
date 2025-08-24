#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int showVector(vector<int> vec, int size)
{for(int i = 0; i < size; i++ ) { cout << vec[i] << " ";} cout << endl;}
int main () {
    int size1; cout << "Input the size of the first array: \n"; cin >> size1;
    int size2; cout << "Input the size of the second array: \n"; cin >> size2;
    vector<int> v1(size1); vector<int> v2(size2);
    cout << "Input Elements in the first Array" << endl;
    for(int i = 0; i < size1; i++) { cin >> v1[i]; }
    cout << "Input Elements in the second Array" << endl;
    for(int i = 0; i < size2; i++) { cin >> v2[i]; }
    vector<int> ans;

    int i = size1 - 1; int j = size2 - 1; int carry = 0;
    while(i >= 0 && j >= 0)
    {
        int sum = v1[i] + v2[j] + carry;
        int final_sum = sum % 10;
        carry = sum / 10;

        ans.push_back(final_sum);
        i--; j--;
    }
    while(i >= 0)
    {
        int sum = v1[i] + carry;
        int final_sum = sum % 10;
        carry = sum / 10;

        ans.push_back(final_sum);
        i--;
    }
    while(j >= 0)
    {
        int sum = v2[j] + carry;
        int final_sum = sum % 10;
        carry = sum / 10;

        ans.push_back(final_sum);
        j--;
    }
    if(carry > 0) { ans.push_back(carry); }
    reverse(ans.begin(), ans.end());
    showVector(ans, ans.size());
}