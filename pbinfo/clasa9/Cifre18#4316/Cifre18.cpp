#include <iostream>

using namespace std;

int main()
{
    int n, cpyn, k, cif = 0, og = 0;
    cin >> n >> k;
    cpyn = n;
    while(cpyn)
    {
        og = og * 10 + cpyn % 10;
        cif++;
        cpyn /= 10;
    }
    while(og)
    {
        if(k == 1)
        {
            if(og % 10 != 9)
            {
                cout << og % 10 + 1;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            cout << og % 10;
        }
        k--;
        og /= 10;
    }
    return 0;
}