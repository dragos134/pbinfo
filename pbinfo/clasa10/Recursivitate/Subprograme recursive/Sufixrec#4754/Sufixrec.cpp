#include <iostream>

using namespace std;

int sufmax(int n)
{
    if(n < 10)
    {
        return n % 10;
    }
    if(n % 10 == n / 10 % 10)
    {
        return 10 * sufmax(n / 10) + n % 10;
    }
    return n % 10;
}

int main()
{
    cout << sufmax(2);
    return 0;
}