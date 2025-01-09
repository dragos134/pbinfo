#include <iostream>
using namespace std;

int main()
{
    int n, x, nc = 0;
    cin >> n;
    while(n)
    {
        cin >> x;
        while(x > 9)
        {
            short uc = x % 100;
            if(uc == 69)
            {
                nc++;
                break;
            }
            x /= 10;
        }
        n--;
    }
    cout << nc;
    return 0;
}