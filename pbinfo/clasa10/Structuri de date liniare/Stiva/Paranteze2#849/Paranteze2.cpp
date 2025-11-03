#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("paranteze2.in");
ofstream fout("paranteze2.out");

int main()
{
    char sir[255];
    int cnt = 0, max_cnt = 0;
    fin.getline(sir, 255);
    int n = strlen(sir);
    for(int i = 0; i < n; i++)
    {
        if(sir[i] == '(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if(cnt > max_cnt)
        {
            max_cnt = cnt;
        }
    }
    fout << max_cnt;
    return 0;
}