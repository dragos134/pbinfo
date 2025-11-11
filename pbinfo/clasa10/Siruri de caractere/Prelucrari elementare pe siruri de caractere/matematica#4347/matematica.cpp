#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

ifstream fin("matematica.in");
ofstream fout("matematica.out");

int main()
{
    int c, start = 0;
    long long nr_act = 0, sum = 0, max_neg = 0, min_poz = 1125899906842624;
    bool are_neg = false;
    char s[1001], semn = '+';
    fin >> c >> s;
    int sz = strlen(s);

    if(s[0] == '-' || s[0] == '+')
    {
        semn = s[0];
        start = 1;
    }

    for(int i = start; i < sz; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            nr_act = 10 * nr_act + s[i] - '0';
        }
        else
        {
            if(semn == '-')
            {
                sum -= nr_act;
                are_neg = true;
                if(nr_act > max_neg)
                {
                    max_neg = nr_act;
                }
            }
            if(semn == '+')
            {
                sum += nr_act;
                if(nr_act < min_poz)
                {
                    min_poz = nr_act;
                }
            }

            semn = s[i];

            nr_act = 0;
        }
    }

    // verificare pentru ultimul numar
    if(semn == '-')
    {
        sum -= nr_act;
        are_neg = true;
        if(nr_act > max_neg)
        {
            max_neg = nr_act;
        }
    }
    else
    {
        sum += nr_act;
        if(nr_act < min_poz)
        {
            min_poz = nr_act;
        }
    }

    if(c == 1)
    {
        fout << sum;
    }
    if(c == 2)
    {
        if(are_neg)
        {
            fout << sum + 2 * max_neg;
        }
        else
        {
            fout << sum - 2 * min_poz;
        }
    }

    return 0;
}