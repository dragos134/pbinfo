#include <iostream>
using namespace std;

int main()
{
    int x, y, z, cnt = 0;
    cin >> x >> y >> z;

    for(int i = 0; i < 1000; i++)
    {
        if(i % 10 + i / 10 % 10 + i / 100 == z)
        {
            cnt++;
        }
    }
    cout << (10 - x) * cnt;
    return 0;
}