#include <iostream>

using namespace std;

int main()
{
    int n, k, x, prev_x, a[10], i = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> k >> prev_x;
        k--;
        a[i] = 1;
        while(k)
        {
            k--;
            cin >> x;
            if(x < prev_x)
            {
                a[i] = 0;
            }
            prev_x = x;
        }
        i++;
    }

    for(int z = 0; z < i; z++)
    {
        cout << a[z] << ' ';
    }

    return 0;
}