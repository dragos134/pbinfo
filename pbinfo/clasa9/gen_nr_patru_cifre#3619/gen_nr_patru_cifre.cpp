#include <iostream>

using namespace std;

bool respecta_cond(int n, short c1, short c2)
{
    if(n % 2) return false;
    if(n % 10 != n / 100 % 10) return false;
    if(n / 10 % 10 > c2) return false;
    if(n / 1000 < c1) return false;
    return true;
}

int main()
{
    short c1, c2;
    cin >> c1 >> c2;
    if (c1 == 0) c1++;
    for(int i = c1 * 1000; i < 9899; i++)
    {
        if(respecta_cond(i, c1, c2))
        {
            cout << i << endl;
        }
    }
    return 0;
}