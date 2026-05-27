#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/2563/fadcresc

struct nod{
    int info;
    nod * urm;
};

nod* generate()
{
    nod *p = new nod;
    p -> urm = NULL;
    int n;
    cin >> n;
    nod *start = p;
    for(int i = 0; i < n; i++)
    {
        nod *aux = new nod;
        cin >> aux -> info;
        aux -> urm = NULL;
        p -> urm = aux;
        p = p -> urm;
    }
    return start -> urm;
}

void afisare(nod *p)
{
    while(p != NULL)
    {
        cout << p -> info << ' ';
        p = p -> urm;
    }
}


void ins_cresc(nod *&p, int x)
{
    if(p -> info >= x)
    {
        nod *aux = new nod;
        aux -> info = x;
        aux -> urm = p;
        p = aux;
        return;
    }
    nod *start = p;
    while(p -> urm != NULL)
    {
        if(p -> info <= x && p -> urm -> info >= x)
        {
            nod *aux = new nod;
            aux -> info = x;
            aux -> urm = p -> urm;
            p -> urm = aux;
            p = start;
            return;
        }
        p = p -> urm;
    }

    nod *aux = new nod;
    aux -> info = x;
    aux -> urm = NULL;
    p -> urm = aux;
    p = start;
}

int main()
{
    nod *test = generate();
    ins_cresc(test, 12);
    afisare(test);
    return 0;
}