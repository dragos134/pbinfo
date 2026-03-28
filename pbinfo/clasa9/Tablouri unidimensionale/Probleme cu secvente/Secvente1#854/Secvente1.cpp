#include <iostream>

using namespace std;

int main()
{
    int n, k, x, nr_imp = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x % 2 == 1)
        {
            nr_imp++;
        }
    }
    if(nr_imp % k == 0)
    {
        cout << nr_imp / k;
    }
    else
    {
        cout << nr_imp / k + 1;
    }
    return 0;
}