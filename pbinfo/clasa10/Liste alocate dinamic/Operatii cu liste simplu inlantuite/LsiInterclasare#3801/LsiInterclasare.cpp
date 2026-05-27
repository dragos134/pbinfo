#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/3801/lsiinterclasare

ifstream fin("lsiinterclasare.in");
ofstream fout("lsiinterclasare.out");

struct Nod
{
    int info;
    Nod *leg;
};

Nod* generate()
{
    Nod *p = new Nod;
    p -> leg = NULL;
    int n;
    fin >> n;
    Nod *start = p;
    for(int i = 0; i < n; i++)
    {
        Nod *aux = new Nod;
        fin >> aux -> info;
        aux -> leg = NULL;
        p -> leg = aux;
        p = p -> leg;
    }
    return start -> leg;
}

void afisare(Nod *p)
{
    while(p != NULL)
    {
        fout << p -> info << ' ';
        p = p -> leg;
    }
}

void LsiInterclasare(Nod *h1, Nod *h2, Nod *&h)
{
    if(h1 == NULL)
    {
        h = h2;
        h2 = h2 -> leg;
    }
    else if(h2 == NULL)
    {
        h = h1;
        h1 = h1 -> leg;
    }
    else
    {
        if(h1 -> info > h2 -> info)
        {
            h = h2;
            h2 = h2 -> leg;
        }
        else
        {
            h = h1;
            h1 = h1 -> leg;
        }
    }
    Nod *start = h;
    while(h1 != NULL && h2 != NULL)
    {
        if(h1 -> info > h2 -> info)
        {
            h -> leg = h2;
            h2 = h2 -> leg;
        }
        else
        {
            h -> leg = h1;
            h1 = h1 -> leg;
        }
        h = h -> leg;
    }
    while(h1 != NULL)
    {
        h -> leg = h1;
        h1 = h1 -> leg;
        h = h -> leg;
    }
    while(h2 != NULL)
    {
        h -> leg = h2;
        h2 = h2 -> leg;
        h = h -> leg;
    }
    h = start;
}

int main()
{
    Nod *t1, *t2, *rez;
    t1 = generate();
    t2 = generate();
    LsiInterclasare(t1, t2, rez);
    afisare(rez);
    return 0;
}