#include <iostream>

using namespace std;

int main()
{
    int a, b, cpyA, cpyB, cntA = 0, cntB = 0;
    cin >> a >> b;
    cpyA = a;
    cpyB = b;
    while(a)
    {
        if(a % 2 == 1)
            cntA++;
        a /= 2;
    }

    while(b)
    {
        if(b % 2 == 1)
            cntB++;
        b /= 2;
    }

    if(cntA > cntB)
        cout << cpyA;
    else if(cntB > cntA)
        cout << cpyB;
    else
        cout << min(cpyA, cpyB);

    return 0;
}