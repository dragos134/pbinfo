#include <iostream>

using namespace std;

int main()
{
    int n, el_maj, cnt = 1, a[100000];
    cin >> n;
    cin >> a[0];
    el_maj = a[0];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == el_maj)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if(cnt == 0)
        {
            el_maj = a[i];
            cnt = 1;
        }
    }

    cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == el_maj)
        {
            cnt++;
        }
    }

    if(cnt > n / 2)
    {
        cout << "DA " << el_maj;
    }
    else
    {
        cout << "NU";
    }

    return 0;
}