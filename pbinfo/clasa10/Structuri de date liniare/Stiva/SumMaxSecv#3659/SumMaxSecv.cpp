#include <iostream>

using namespace std;

int main()
{
    int n, x, stv1[100000], stv2[100000], cnt1 = 0, cnt2 = 0;
    cin >> n;
    long long s = n * x;
    for(int i = n; i > 0; i--)
    {
        cin >> x;
        int step = n - i + 1;
        int x_count = step * i;
        if(x < stv1[cnt1 - 1])
        {
            s = s + step * x;
            stv1[cnt1] = x;
            stv2[cnt2] = step;
            cnt1++;
            cnt2++;
        }
        if(x > stv1[cnt1 - 1])
        {
            
        }
    }
    return 0;
}