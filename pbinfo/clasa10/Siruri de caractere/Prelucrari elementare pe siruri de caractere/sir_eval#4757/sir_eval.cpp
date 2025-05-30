#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("sir_eval.in");
ofstream fout("sir_eval.out");

int main()
{
    char s[25], scpy[25];
    fin.getline(s, 25);
    strcpy(scpy, s);
    bool is_sum = false;
    if(strchr(s, '+'))
    {
        is_sum = true;
    }
    int s_size = strlen(s), rez;
    char *var = strtok(scpy, "=");
    int val1 = atoi(strtok(NULL, "+*"));
    int val2 = atoi(strtok(NULL, "+*"));

    if(is_sum)
    {
        rez = val1 + val2;
    }
    else
    {
        rez = val1 * val2;
    }
    fout << var << '=' << rez;
    
    return 0;
}