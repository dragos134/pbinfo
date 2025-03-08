#include <iostream>

using namespace std;


int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << ' ';
    }

    cout << '\n';

    for (int i = n; i > 0; i++)
    {
        cout << i << ' ';
    }

    return 0;
}