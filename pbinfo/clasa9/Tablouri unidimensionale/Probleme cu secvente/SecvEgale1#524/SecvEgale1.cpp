#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], smax = 0, imax = 0, jmax = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - smax; i++)
    {
        int j = n - 1;
        while(a[j] != a[i])
        {
            j--;
        }
        if(j - i > smax)
        {
            smax = j - i + 1;
            imax = i + 1;
            jmax = j + 1;
        }
    }

    cout << imax << ' ' << jmax;

    return 0;
}