#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1178/flistastergere2

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

void sterge(nod * & p)
{
    while(p != NULL && p -> info % 2 == 0)
    {
        nod *q = p;
        p = p -> urm;
        delete q;
    }
    if(p == NULL)
    {
        return;
    }
    nod *start = p;

    while(p != NULL && p -> urm != NULL)
    {
        if(p -> urm -> info % 2 == 0)
        {
            nod *q = p -> urm;
            p -> urm = p -> urm -> urm;
            delete q;
        }
        else
        {
            p = p -> urm;
        }
    }
    p = start;
}

int main()
{
    nod *test_pare = generate();
    sterge(test_pare);
    afisare(test_pare);
    return 0;
}