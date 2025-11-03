#include <iostream>

using namespace std;

int majImp(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        int div = 2, s_par = 0, s_impar = 0;
        for(div = 2; div * div < i; div++)
        {
            if(i % div == 0)
            {
                int div_p = i / div;
                if(div % 2)
                {
                    s_impar += div;
                }
                else
                {
                    s_par += div;
                }

                if(div_p % 2)
                {
                    s_impar += div_p;
                }
                else
                {
                    s_par += div_p;
                }
            }
        }

        if(div * div == i)
        {
            if(div % 2)
            {
                s_impar += div;
            }
            else
            {
                s_par += div;
            }
        }

        if(s_impar > s_par)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    cout << majImp(16, 30);
    return 0;
}