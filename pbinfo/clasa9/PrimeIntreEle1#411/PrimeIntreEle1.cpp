#include <iostream>

using namespace std;
long long cmmdc(long long a, long long b)
{
    long long cpy;
    if(a < b)
    {
        swap(a, b);
    }

    while(a && b)
    {
        cpy = b;
        b = a % b;
        a = cpy;
    }

    return a + b;
}
int main()
{
    int n, cnt = 1;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(cmmdc(i, j) == 1)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}