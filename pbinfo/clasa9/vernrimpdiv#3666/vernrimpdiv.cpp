#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 2;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt += 2;
        }
        if(i * i == n)
        {
            cnt -= 1;
        }
    }
    if(cnt % 2)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}