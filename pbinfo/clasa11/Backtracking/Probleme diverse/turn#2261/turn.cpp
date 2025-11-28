#include <fstream>

using namespace std;

ifstream fin("turn.in");
ofstream fout("turn.out");

int n, h, a[14], b[14], sol[50];
bool folosit[14];

void afisare(int k)
{
    for(int i = 0; i < k; i++)
    {
        fout << sol[i] + 1 << ' ';
    }
    fout << '\n';
}

void back(int step, int suma, int last_h, int last_c)
{
    for(int i = 0; i < n; i++)
    {
        if(folosit[i])
        {
            continue;
        }
        folosit[i] = true;
        sol[step - 1] = i;
        int news = suma + a[i];
        if(a[i] > last_h || b[i] == last_c)
        {
            folosit[i] = false;
            continue;
        }

        if(news < h)
        {
            back(step + 1, news, a[i], b[i]);
        }
        if(news == h)
        {
            afisare(step);
        }

        folosit[i] = false;
    }
}

int main()
{
    fin >> n >> h;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i] >> b[i];
    }
    back(1, 0, 51, 0);
    return 0;
}