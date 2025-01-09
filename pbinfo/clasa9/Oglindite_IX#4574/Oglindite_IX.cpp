#include <iostream>

using namespace std;

int main()
{
    int a, cpya, b, cpyb, oa = 0, ob = 0;
    cin >> a >> b;
    cpya = a;
    cpyb = b;

    while(cpya)
    {
        oa = oa * 10 + cpya % 10;
        cpya /= 10;
    }

    while(cpyb)
    {
        ob = ob * 10 + cpyb % 10;
        cpyb /= 10;
    }

    if(oa > ob)
    {
        cout << a;
    }
    if(ob > oa)
    {
        cout << b;
    }
    if(ob == oa)
    {
        cout << min(a, b);
    }

    return 0;
}