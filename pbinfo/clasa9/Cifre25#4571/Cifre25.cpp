#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0, s = 0;
    cin >> n;

    while(n)
    {
        n--;
        cin >> x;
        int cpyx = x;
        bool hasTwo = false, hasFive = false;
        while(cpyx)
        {
            if(cpyx % 10 == 2)
            {
                hasTwo = true;
            }
            if(cpyx % 10 == 5)
            {
                hasFive = true;
            }
            cpyx /= 10;
        }
        if(hasTwo && !hasFive)
        {
            cnt++;
        }
        if(!hasTwo && hasFive)
        {
            s += x;
        }
    }
    cout << cnt << ' ' << s;
    return 0;
}