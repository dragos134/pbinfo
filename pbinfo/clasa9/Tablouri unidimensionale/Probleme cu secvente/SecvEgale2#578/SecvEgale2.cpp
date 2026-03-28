#include <iostream>

using namespace std;

int main()
{
    long long n, x, xant, cnt = 1, partcnt = 2;
    cin >> n >> xant;

    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if(x == xant)
        {
            cnt += partcnt;
            partcnt++;
        }
        else
        {
            partcnt = 2;
            cnt++;
        }
        xant = x;
    }

    cout << cnt;
    return 0;
}