#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("paranteze3.in");
ofstream fout("paranteze3.out");

int main()
{
    int n;
    char sir[256], stv[256], cnt = 0;
    fin >> n;
    fin.getline(sir, 256);
    while(n)
    {
        n--;
        fin.getline(sir, 256);
        int sz = strlen(sir);
        bool ok = true;
        for(int i = 0; i < sz; i++)
        {
            if(sir[i] == '[' || sir[i] == '(')
            {
                stv[cnt] = sir[i];
                cnt++;
            }

            if(sir[i] == ']')
            {
                if(cnt > 0 && stv[cnt - 1] == '[')
                {
                    cnt--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if(sir[i] == ')')
            {
                if(cnt > 0 && stv[cnt - 1] == '(')
                {
                    cnt--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        fout << ok << '\n';
    }
    return 0;
}