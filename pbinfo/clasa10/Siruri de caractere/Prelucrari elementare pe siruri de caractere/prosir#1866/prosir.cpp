#include <string.h>
#include <fstream>
using namespace std;
ifstream fin("prosir.in");
ofstream fout("prosir.out");

int main()
{
    char s[201];
    fin.getline(s, 201);
    int s_size = strlen(s);
    for(int i = 0; i < s_size - 1; i++)
    {
        if(s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '.'))
        {
            s[i] = '5';
        }
    }
    fout << s;
    return 0;
}