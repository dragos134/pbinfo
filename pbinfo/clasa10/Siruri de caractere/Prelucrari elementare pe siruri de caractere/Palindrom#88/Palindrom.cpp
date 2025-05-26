#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{
    int n, s_size;
    bool este_pal;
    char s[21];
    fin.getline(s, 20);
    n = atoi(s);
    while(n)
    {
        n--;
        fin.getline(s, 20);
        s_size = strlen(s);
        este_pal = true;
        for(int i = 0; i < s_size / 2; i++)
        {
            if(s[i] != s[s_size - 1 - i])
            {
                este_pal = false;
                break;
            }
        }
        if(este_pal)
        {
            fout << 1;
        }
        else
        {
            fout << 0;
        }
        fout << '\n';
    }
    return 0;
}