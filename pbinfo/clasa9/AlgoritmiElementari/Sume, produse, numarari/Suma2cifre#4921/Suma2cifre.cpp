#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    while(n > 0)
    {
        if(n < 100 && n > 9)
        {
            if(n / 10 == n % 10)
            {
                s += n;
            }
        }
        cin >> n;
    }
    cout << s;
    return 0;
}