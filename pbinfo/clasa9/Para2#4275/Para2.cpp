#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}