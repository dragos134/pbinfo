#include <iostream>

using namespace std;

int semne(int n, int depth)
{
    int a;

    if (depth == 0)
    {
        if (n == 0)
        {
            return 1;
        }
        return 0;
    }

    a = semne(n - depth * depth, depth - 1);
    if (a)
    {
        cout << '+';
        return 1;
    }

    a = semne(n + depth * depth, depth - 1);
    if (a)
    {
        cout << '-';
        return 1;
    }

    return 0;
}

int main()
{
    int n, d = 1;
    cin >> n;
    while (semne(n, d) == 0)
    {
        d++;
    }
}