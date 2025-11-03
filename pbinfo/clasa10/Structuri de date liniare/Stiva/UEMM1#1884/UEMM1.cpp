#include <iostream>

using namespace std;

int main()
{
    int n, a[100000], b[100000], stv[100000], cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        stv[cnt] = i;
        cnt++;
        while(cnt > 1 && a[i] > a[stv[cnt - 2]])
        {
            cnt--;
            a[stv[cnt - 1]] = a[i];
            b[stv[cnt - 1]] = a[i];
            stv[cnt - 1] = i; 
        }
        b[i] = -1;
    }
    for(int i = 0; i < n; i++)
    {
        cout << b[i] << ' ';
    }
    return 0;
}