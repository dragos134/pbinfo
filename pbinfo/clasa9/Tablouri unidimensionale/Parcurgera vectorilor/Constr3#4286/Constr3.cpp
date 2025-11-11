#include <iostream>
using namespace std;

int main()
{
    int x[200], y[200], n, k = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = n - 1; i >= 0; i--)
    {
        if(x[i] % 2)
        {
            y[k] = x[i];
            k++;
        }
    }

    for(int i = 0; i < k; i++)
    {
        cout << y[i] << ' ';
    }
    return 0;
}