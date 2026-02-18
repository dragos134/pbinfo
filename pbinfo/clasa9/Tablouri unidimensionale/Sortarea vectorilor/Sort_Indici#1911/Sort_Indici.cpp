#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i + 1;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j] || a[i] == a[j] && b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ' << b[i] << ' ';
    }

    return 0;
}