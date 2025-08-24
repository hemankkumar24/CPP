#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    string line; cout << "Input the base Sentence"; getline(cin, line);
    string perm; cout << "Input the permutation: "; getline(cin, perm);
    
    char countStr[26] = {0}; int index;
    // we are counting the frequency of every alphabet here
    for(int i = 0; i < perm.length(); i++)
    { index = 'a' - perm[i]; countStr[index]++; }
}