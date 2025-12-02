#include <iostream>

using namespace std;

int main()
{
    int n, x, ok = 1;
    cin >> n;

    while(n)
    {
        n--;
        cin >> x;
        int cnt = 1;
        while(x > 9)
        {
            x /= 10;
            cnt++;
        }
        if(cnt % 2)
        {
            ok = 0;
        }
    }

    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }


    return 0;
}