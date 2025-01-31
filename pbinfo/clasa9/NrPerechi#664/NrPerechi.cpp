#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    int cpy;
    if(a < b)
    {
        swap(a, b);
    }

    while(a && b)
    {
        cpy = b;
        b = a % b;
        a = cpy;
    }

    return a + b;
}


int main()
{
    short n, div_nr;
    int x, vec[10000], cnt;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        cnt = 0;
        div_nr = 2;
        vec[0] = 1;
        vec[1] = x;
        for(int i = 2; i * i <= x; i++)
        {
            if(x % i == 0)
            {
                vec[div_nr] = i;
                vec[div_nr + 1] = x / i;
                div_nr += 2;
            }

            if(i * i == x)
            {
                div_nr--;
            }
        }
        for(int i = 0; i < div_nr; i++)
        {
            for(int j = 0; j < div_nr; j++)
            {
                int cdiv = cmmdc(vec[i], vec[j]);
                if(vec[i] / cdiv * vec[j] == x)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << ' ';
    }
}