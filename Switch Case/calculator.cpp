#include <iostream>
using namespace std;

int main()
{
    cout << "Input two numbers and the operation you want to perform" << endl;

    float num1, num2;
    char operation;

    cin >> num1;
    cin >> num2;
    cin >> operation;

    switch(operation)
    {
        case '+':
        {
            cout << (num1+num2) << endl;
            break;
        }
        case '-':
        {
            cout << (num1-num2) << endl;
            break;
        }
        case '*':
        {
            float multi = num1*num2;
            cout << (multi) << endl;
            break;
        }
        case '/':
        {
            float division = num1/num2;
            cout << (division) << endl;
            break;
        }
    }
}