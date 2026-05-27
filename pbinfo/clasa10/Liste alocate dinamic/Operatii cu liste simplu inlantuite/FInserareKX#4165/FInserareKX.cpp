#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/4165/finserarekx

ifstream fin("finserarekx.in");
ofstream fout("finserarekx.out");

struct Nod
{
    int info;
    Nod *leg;
};

void FInserareKX(Nod * &head, int k, int x)
{
    if(head == NULL)
    {
        head = new Nod;
        head -> info = x;
        head -> leg = NULL;
        return;
    }

    if(k <= 1)
    {
        Nod *aux = new Nod;
        aux -> info = x;
        aux -> leg = head;
        head = aux;
        return;
    }

    Nod *start = head;
    Nod *nou = new Nod;
    nou -> info = x;
    nou -> leg = NULL;

    for(int i = 1; i < k - 1; i++)
    {
        if(head -> leg != NULL)
        {
            head = head -> leg;
        }
        else
        {
            break;
        }
    }

    nou -> leg = head -> leg;
    head -> leg = nou;
    head = start;
}

int main()
{

    return 0;
}