#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("ifelse.in");
ofstream fout("ifelse.out");

int main()
{
    int n;
    fin >> n;
    char sir[50000];
    fin.getline(sir, 50000);
    while(n)
    {
        n--;
        fin.getline(sir, 50000);
        char *token = strtok(sir, " ");
        int if_count = 0, else_count = 0, op_count = 0, stv_count = 0;
        while (token != NULL) 
        {
            if(strcmp(token, "if") == 0)
            {
                stv_count++;
                if_count++;
            }
            else
            {
                stv_count--;
                else_count++;
            }
            if(stv_count == -1)
            {
                op_count++;
                else_count--;
                if_count++;
                stv_count = 1;
            }
            token = strtok(NULL, " ");
        }
        if((if_count + else_count) % 2 == 0)
        {
            fout << op_count + (if_count - else_count) / 2 << '\n';
        }
        else
        {
            fout << -1 << '\n';
        }
    }
    return 0;
}