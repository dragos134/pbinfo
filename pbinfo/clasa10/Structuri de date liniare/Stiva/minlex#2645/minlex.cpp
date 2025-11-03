#include <iostream>
using namespace std;

int main()
{
    int k, cnt = 0;
    char c, cuv[1000001];
    cin >> k;
    while(cin >> c)
    {
        cuv[cnt] = c;
        cnt++;
        while(k > 0 && cnt > 1 && cuv[cnt - 1] < cuv[cnt - 2])
        {
            cuv[cnt - 2] = cuv[cnt - 1];
            cnt--;
            k--;
        }
    }
    cnt -= k;
    cuv[cnt] = '\0';
    cout << cuv;
    return 0;
}