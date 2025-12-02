#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;

        if(i % 2)
        {
            for(int k1 = 0; k1 < x; k1++)
            {
                for(int k2 = 0; k2 < x; k2++)
                {
                    cout << (k1 * k2) % x << ' ';
                }
                cout << '\n';
            }
        }
        else
        {
            for(int k1 = 0; k1 < x; k1++)
            {
                for(int k2 = 0; k2 < x; k2++)
                {
                    cout << (k1 + k2) % x << ' ';
                }
                cout << '\n';
            }
        }
    }

    return 0;
}