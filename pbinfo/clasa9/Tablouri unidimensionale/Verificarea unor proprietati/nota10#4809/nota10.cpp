#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, cnt = 0, max_cur = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(x > max_cur)
        {
            cnt++;
            max_cur = x;
        }
    }
    cout << cnt;
    return 0;
}