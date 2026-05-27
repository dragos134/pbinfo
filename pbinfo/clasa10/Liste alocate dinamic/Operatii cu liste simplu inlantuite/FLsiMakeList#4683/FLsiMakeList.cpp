#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/4683/flsimakelist

struct nod
{
    int info;
    nod *urm;
};

void MakeList(nod *&head, int a[], int n)
{
    if(n == 0)
    {
        head = NULL;
        return;
    }
    nod* start = new nod;
    start -> info = a[0];
    start -> urm = NULL;
    head = start;

    for(int i = 1; i < n; i++)
    {
        nod* p = new nod;
        p -> info = a[i];
        p -> urm = NULL;
        start -> urm = p;
        start = p;
    }
}

int main()
{
    return 0;
}