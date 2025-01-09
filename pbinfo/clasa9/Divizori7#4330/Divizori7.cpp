#include <iostream>

using namespace std;

int main()
{
    short cnt = 0;
    int n;
    long long s = 0;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0 && cnt < 2)
        {
            s += i;
            cnt++;
        }
        if(cnt == 2)
        {
            break;
        }
    }
    if(cnt == 1)
    {
        s += n / s;
    }
    cout << s;

    return 0;
}