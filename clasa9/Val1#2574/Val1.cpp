#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "__0_0___";
    }
    cout << '\n';
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "_0___0__";
        }
        cout << '\n';
    }
    if (n > 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "0_____0_";
        }
        cout << '\n';
    }
    return 0;
}