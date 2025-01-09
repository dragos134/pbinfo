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
    int n, a, b, cmd;
    bool ok;
    cin >> n;
    while(n)
    {
        n--;
        cin >> a >> b;
        ok = false;
        cmd = cmmdc(a, b);
        a = a / cmd;
        b = b / cmd;
        while(b % 2 == 0)
        {
            b /= 2;
            ok = true;
        }

        while(b % 5 == 0)
        {
            b /= 5;
            ok = true;
        }

        if(b == 1)
        {
            cout << "fractie finita";
        }
        else if(ok)
        {
            cout << "fractie periodica mixta";
        }
        else if(!ok)
        {
            cout << "fractie periodica simpla";
        }
        cout << endl;
    }

    return 0;
}