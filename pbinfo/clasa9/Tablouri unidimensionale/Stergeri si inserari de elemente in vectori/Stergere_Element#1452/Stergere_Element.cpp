#include <iostream>

using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        cin >> t;
        if(i != x)
        {
            cout << t << ' ';
        }
    }
    return 0;
}