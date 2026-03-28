#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, t, a[20000], raspuns[20000], x, y;
    cin >> n >> t;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if(x > a[n - 1] || y < a[0])
        {
            raspuns[i] = 0;
            continue;
        }
        int st = 0, dr = n - 1, left = 0, right = n - 1;
        while(st < dr)
        {
            int mij = (st + dr) / 2;
            // iesire 1
            if(x <= a[mij] && x > a[mij - 1])
            {
                left = mij;
                break;
            }
            // iesire 2
            if(a[mij] < x && x <= a[mij + 1])
            {
                left = mij + 1;
                break;
            }

            // restrangere
            if(x <= a[mij])
            {
                dr = mij - 1;
            }
            else
            {
                st = mij + 1;
            }
        }
        
        st = 0;
        dr = n - 1;
        while(st < dr)
        {
            int mij = (st + dr) / 2;
            // iesire 1
            if(y < a[mij] && y >= a[mij - 1])
            {
                right = mij - 1;
                break;
            }
            // iesire 2
            if(a[mij] <= y && y < a[mij + 1])
            {
                right = mij;
                break;
            }

            //restrangere
            if(y < a[mij])
            {
                dr = mij - 1;
            }
            else
            {
                st = mij + 1;
            }
        }

        raspuns[i] = right - left + 1;
    }

    for(int i = 0; i < t; i++)
    {
        cout << raspuns[i] << '\n';
    }
    return 0;
}