#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/3789/flistaoglindire

struct nod{
    int info;
    nod * urm;
};

void oglindire(nod * & p)
{
    nod *ogl = NULL;
    while(p != NULL)
    {
        nod *aux = new nod;
        aux -> info = p -> info;
        aux -> urm = ogl;
        ogl = aux;

        p = p -> urm;
    }

    p = ogl;
}

int main()
{
    return 0;
}