#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/4170/flsidesc

ifstream fin("flsidesc.in");
ofstream fout("flsidesc.out");

struct Nod
{
    int info;
    Nod *leg;
};

void FLsiDesc(Nod *head)
{
    while(head -> info != 1)
    {
        if(!(head -> leg != NULL && head -> leg -> info == head -> info - 1))
        {
            Nod *aux = new Nod;
            aux -> info = head -> info - 1;
            aux -> leg = head -> leg;
            head -> leg = aux;
        }
        head = head -> leg;
    }
}

int main()
{
    return 0;
}