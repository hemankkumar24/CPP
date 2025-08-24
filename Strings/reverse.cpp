#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int length = 0;
    for(int i = 0; ch[i] != '\0'; i++ )
    { length++; }

    return length;
}
int main()
{
    cout << "Input String: \n"; char ch[20]; cin >> ch; 
    int start = 0 ; int end = getLength(ch) - 1; int step = 0;
    while(start <= end)
    {
        step++;
        cout << "Step " << step << endl;
        cout << ch << '\n' << endl;
        swap(ch[start++],ch[end--]);
    }
}