#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1177/flistastergere1

struct nod{
    int info;
    nod * urm;
};

void sterge(nod * & p, nod * q)
{
    nod *start = p;
    if(p == q)
    {
        p = p -> urm;
        return;
    }
    while(p -> urm != NULL)
    {
        if(p -> urm == q)
        {
            p -> urm = p -> urm -> urm;
            break;
        }
        p = p -> urm;
    }
    p = start;
}

int main()
{
    return 0;
}