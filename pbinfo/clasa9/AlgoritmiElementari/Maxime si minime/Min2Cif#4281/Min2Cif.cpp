#include <iostream>

using namespace std;

int main()
{
    int x, minX = 100;

    do
    {
        cin >> x;
        if (x > 9 && x < 100 && x < minX)
        {
            minX = x;
        }
    } while (x);

    if (minX == 100)
        cout << "NU EXISTA";
    else
        cout << minX;

    return 0;
}