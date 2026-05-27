#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1179/flistainserare

struct nod{
    int info;
    nod * urm;
};

void inserare(nod * p, nod * q, int x)
{
    nod *aux = new nod;
    aux -> info = x;
    aux -> urm = q -> urm;
    q -> urm = aux;
}

int main()
{
    return 0;
}