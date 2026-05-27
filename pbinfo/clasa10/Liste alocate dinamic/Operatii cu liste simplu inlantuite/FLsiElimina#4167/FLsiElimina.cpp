#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/4167/flsielimina

ifstream fin("flsielimina.in");
ofstream fout("flsielimina.out");

struct Nod
{
    int info;
    Nod *leg;
};

Nod* generate()
{
    Nod *p = new Nod;
    p -> leg = NULL;
    int n;
    fin >> n;
    Nod *start = p;
    for(int i = 0; i < n; i++)
    {
        Nod *aux = new Nod;
        fin >> aux -> info;
        aux -> leg = NULL;
        p -> leg = aux;
        p = p -> leg;
    }
    return start -> leg;
}

void afisare(Nod *p)
{
    while(p != NULL)
    {
        fout << p -> info << ' ';
        p = p -> leg;
    }
}

void FLsiElimina(Nod * &head)
{
    Nod *start = head;
    if(head -> info % 3 == 0)
    {
        while(head != NULL)
        {
            if(head -> info % 3 == 0)
            {
                start = head -> leg;
            }
            head = head -> leg;
        }
        head = start;
        return;
    }

    while(head != NULL && head -> leg -> info % 3 != 0)
    {
        head = head -> leg;
    }
    Nod *stanga = head;
    Nod *dreapta = head;
    while(head != NULL)
    {
        if(head -> info % 3 == 0)
        {
            dreapta = head;
        }
        head = head -> leg;
    }
    stanga -> leg = dreapta -> leg;
    head = start;
}

int main()
{
    Nod *test = generate();
    FLsiElimina(test);
    afisare(test);
    return 0;
}