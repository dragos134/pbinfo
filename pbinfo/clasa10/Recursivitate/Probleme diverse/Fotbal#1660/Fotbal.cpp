#include <iostream>

using namespace std;

int fotbal(int a, int b)
{
    int rezA = 0, rezB = 0;
    if(a > 0)
    {
        rezA = fotbal(a - 1, b);
    }
    if(b > 0)
    {
        rezB = fotbal(a, b - 1);
    }
    if(a == 0 && b == 0)
    {
        return 1;
    }
    return rezA + rezB;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << fotbal(a, b);
    return 0;
}