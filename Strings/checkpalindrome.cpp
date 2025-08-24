#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int getLength(char ch[])
{
    int length = 0; for(int i = 0; ch[i] != '\0'; i++) { length++; }
    return length;
}

int main()
{
    char ch[20]; cout << "Enter the word" << endl; cin >> ch;

    int start = 0; int end = getLength(ch) - 1; int flag = 0;
    while(start <= end)
    { if(tolower(ch[start++]) == tolower(ch[end--])) { flag++; } }

    cout << flag << endl;
    if(flag == getLength(ch)/2) { cout << "The String is Palindrome! ";}
    else { cout << "The given String is Not Palindrome! ";}
    
}