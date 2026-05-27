#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1170/fadaugareinaintelista

struct nod{
    int info;
    nod * urm;
};

void adaugareInainte(nod * & p , int x)
{
    nod* aux = new nod;
    aux -> info = x;
    aux -> urm = p;
    p = aux;
}

int main()
{
    return 0;
}