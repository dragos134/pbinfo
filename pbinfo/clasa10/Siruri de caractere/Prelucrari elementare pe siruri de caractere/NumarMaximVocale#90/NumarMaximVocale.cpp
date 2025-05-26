#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

const char *vocale = "aeiou";
bool este_vocala(char l)
{
    if(strchr(vocale, tolower(l)))
        return true;
    return false;
}

int main()
{
    int n, s_size, nr_voc, nr_voc_max = 0;
    char s[251], s_max[251];
    fin.getline(s, 251);
    n = atoi(s);
    while(n)
    {
        n--;
        fin.getline(s, 251);
        s_size = strlen(s);
        nr_voc = 0;
        for(int i = 0; i < s_size; i++)
        {
            if(este_vocala(s[i]))
            {
                nr_voc++;
            }
        }
        if(nr_voc_max < nr_voc)
        {
            nr_voc_max = nr_voc;
            strcpy(s_max, s);
        }
    }
    fout << s_max;
    return 0;
}