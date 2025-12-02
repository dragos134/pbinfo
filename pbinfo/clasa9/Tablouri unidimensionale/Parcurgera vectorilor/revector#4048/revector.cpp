#include <iostream>

using namespace std;

int main()
{
    int n, a[100000];
    cin >> n;
    int start = (n % 2);
    for(int i = 0; i < n / 2 + start; i++)
    {
        cin >> a[n - 2 * i - 1];
    }
    for(int i = 0; i < n / 2; i++)
    {
        cin >> a[2 * i + start];
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}