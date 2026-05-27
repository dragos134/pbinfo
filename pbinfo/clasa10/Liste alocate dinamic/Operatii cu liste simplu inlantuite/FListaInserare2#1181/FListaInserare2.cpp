#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1181/flistainserare2

struct nod{
    int info;
    nod * urm;
};

void inserare(nod * p)
{
    while(p != NULL)
    {
        if(p -> info % 2 == 0)
        {
            nod *aux = new nod;
            aux -> info = p -> info * 2;
            aux -> urm = p -> urm;
            p -> urm = aux;
            p = p -> urm;
        }
        p = p -> urm;
    }
}

int main()
{
    return 0;
}