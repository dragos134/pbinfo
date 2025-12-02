#include <iostream>

using namespace std;

int main()
{
    int n, m, a[1000], x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    while(m)
    {
        m--;
        cin >> x;
        int ok = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                ok = 1;
                break;
            }
        }
        cout << ok << ' ';
    }
    return 0;
}