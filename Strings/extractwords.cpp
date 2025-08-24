#include <iostream>
#include <vector>
using namespace std;
int getSize(char ch[])
{
    int length = 0;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char ch[20]; cout << "Input your sentence: " << endl;
    cin.getline(ch, 20); cout << endl;
    int size = getSize(ch); vector<char> temp;
    for(int i = (size-1); i >= 0; i--)
    {
        if(ch[i] == ' ')
        {
            temp.push_back(' ');
        }
            else
            temp.push_back(ch[i]);
    }

    for(int i = 0 ; i < temp.size(); i++ )
    { cout << temp[i]; }
}