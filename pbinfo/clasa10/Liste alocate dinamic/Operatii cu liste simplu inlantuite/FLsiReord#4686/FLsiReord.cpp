#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/4686/flsireord

ifstream fin("flsireord.in");
ofstream fout("flsireord.out");

struct nod
{
    int info;
    nod *urm;
};

nod* generate()
{
    nod *p = new nod;
    p -> urm = NULL;
    int n;
    fin >> n;
    nod *start = p;
    for(int i = 0; i < n; i++)
    {
        nod *aux = new nod;
        fin >> aux -> info;
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
        fout << p -> info << ' ';
        p = p -> urm;
    }
}

void Reord(nod *&head)
{
    nod *start = head;

    while(head != NULL && head -> urm != NULL)
    {
        nod *q = head -> urm;
        if(q -> info < 0)
        {
            head -> urm = q -> urm;
            q -> urm = start;
            start = q;
        }
        else
        {
            head = head -> urm;
        }
    }

    head = start;
}

int main()
{
    nod *test = generate();
    Reord(test);
    afisare(test);
    return 0;
}