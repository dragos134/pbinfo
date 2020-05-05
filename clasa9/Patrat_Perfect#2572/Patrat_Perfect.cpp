#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, n, x[1000];
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(i = 0; i < n; i++)
    {
        if (sqrt(x[i]) == int(sqrt(x[i])))
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NU\n";
        }
    }
    return 0;
}