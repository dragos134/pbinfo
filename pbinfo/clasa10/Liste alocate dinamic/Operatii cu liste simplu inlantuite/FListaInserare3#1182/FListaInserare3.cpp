#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1182/flistainserare3

struct nod{
    int info;
    nod * urm;
};

void inserare(nod * & p)
{
    nod *start = p;
    if(p -> info % 2 == 0)
    {
        nod *aux = new nod;
        aux -> info = 2 * p -> info;
        aux -> urm = p;
        start = aux;
    }

    while(p -> urm != NULL)
    {
        if(p -> urm -> info % 2 == 0)
        {
            nod *aux = new nod;
            aux -> info = 2 * p -> urm -> info;
            aux -> urm = p -> urm;
            p -> urm = aux;
            p = p -> urm;
        }
        p = p -> urm;
    }
    p = start;
}

int main()
{
    return 0;
}