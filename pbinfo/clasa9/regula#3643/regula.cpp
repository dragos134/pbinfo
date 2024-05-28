#include <iostream>
using namespace std;

int main()
{
    long long c, v, i = 0, l = 0, s = 0, nr, nr_index, despartitor;
    cin >> c >> v;
    if (c == 1)
    {
        while (s < v)
        {
            i++;
            l = i + i / 2 + i % 2;
            s += l;
        }

        if (i % 2)
        {
            nr = i;
        }

        nr = i + i % 2 - 1;
        nr_index = l;
        despartitor = l - i / 2 - i % 2;
        while (s > v)
        {
            s--;
            if (nr_index > despartitor)
            {
                nr -= 2;
            }
            if (nr < 0)
            {
                nr = i;
            }
            if (nr_index <= despartitor)
            {
                nr--;
            }
            nr_index--;
        }
        cout << nr;
    }

    if (c == 2)
    {
        while (v)
        {
            v--;
            i++;
            l = i + i / 2 + i % 2;
            s += l;
        }
        cout << s - l + i;
    }

    return 0;
}