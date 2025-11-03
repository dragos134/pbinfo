#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, s[1000], cnt = 0, nr;
    string cmd;
    cin >> n;
    while (n)
    {
        n--;
        cin >> cmd;
        if(cmd.compare("push") == 0)
        {
            cin >> nr;
            s[cnt] = nr;
            cnt++;
        }
        if(cmd.compare("top") == 0)
        {
            cout << s[cnt - 1] << '\n';
        }
        if(cmd.compare("pop") == 0)
        {
            cnt--;
        }
    }
    
    return 0;
}
