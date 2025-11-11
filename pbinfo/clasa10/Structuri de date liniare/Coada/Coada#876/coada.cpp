#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, front = 0, x, a[10000], cnt = 0;
    string cmd;
    cin >> n;
    while(n)
    {
        n--;
        cin >> cmd;
        if(cmd.compare("push") == 0)
        {
            cin >> x;
            a[cnt] = x;
            cnt++;
        }
        if(cmd.compare("front") == 0)
        {
            cout << a[front] << '\n';
        }
        if(cmd.compare("pop") == 0)
        {
            front = front + 1;
        }
    }
    return 0;
}