#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1180/flistainserare1

struct nod{
    int info;
    nod * urm;
};

void inserare(nod * & p, nod * q, int x)
{
    nod *start = p;
    if(p == q)
    {
        nod *aux = new nod;
        aux -> info = x;
        aux -> urm = p;
        p = aux;
        return;
    }
    while(p -> urm != q)
    {
        p = p -> urm;
    }
    nod *aux = new nod;
    aux -> info = x;
    aux -> urm = q;
    p -> urm = aux;
    p = start;
}

int main()
{
    return 0;
}