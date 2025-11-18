#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(i != 1 && i != n - 2)
        {
            cout << x << ' ';
        }
    }
    return 0;
}