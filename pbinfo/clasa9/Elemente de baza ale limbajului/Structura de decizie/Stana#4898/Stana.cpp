#include <iostream>

using namespace std;

int main()
{
    int cb, oi;
    cin >> cb >> oi;

    if(cb > oi)
    {
        cout << "Sunt prea multi ciobani";
    }
    else if(oi % cb == 0)
    {
        cout << oi / cb;
    }
    else
    {
        cout << oi / cb + 1 << ' ' << oi / cb;
    }
    return 0;
}