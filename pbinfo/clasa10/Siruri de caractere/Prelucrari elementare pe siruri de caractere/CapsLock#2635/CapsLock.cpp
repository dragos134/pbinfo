#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
    char s[256];
    fin.getline(s, 256);
    bool is_capslock = false;
    int s_size = strlen(s);
    for(int i = 0; i < s_size; i++)
    {
        if(s[i] == '#')
        {
            is_capslock = !is_capslock;
        }
        else
        {
            if(is_capslock)
            {
                fout << (char)(toupper(s[i]));
            }
            else
            {
                fout << (char)(s[i]);
            }
        }
    }
    return 0;
}