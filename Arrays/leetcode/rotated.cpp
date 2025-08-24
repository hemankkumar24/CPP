#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int size; cout << "Input Size: \n"; cin >> size; cout << "Input Elements";
    vector <int> v(size); for(int i = 0; i < size; i++ ) { cin >> v[i]; }
    int rb; cout << "Input Rotation Distance: \n"; cin >> rb;
    vector <int> temp(size);

    for(int i = 0; i < size; i++)
    {
        temp[((i+rb)%size)] = v[i];
    }

    for(int i = 0; i < size; i++ )
    {
        cout << temp[i] << " ";
    }
}