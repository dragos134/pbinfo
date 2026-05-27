#include <iostream>

using namespace std;

struct Nod
{
    int info;
    Nod *leg;
};

void FAdaugaInainte(Nod * &head)
{
    Nod* start = head;
    if(head -> info % 2 == 1)
    {
        Nod* aux = new Nod;
        aux -> info = 2 * head -> info;
        aux -> leg = head;
        start = aux;
    }

    while(head -> leg != NULL)
    {
        if(head -> leg -> info % 2 == 1)
        {
            Nod* aux = new Nod;
            aux -> info = 2 * head -> leg -> info;
            aux -> leg = head -> leg;
            head -> leg = aux;
            head = aux;
        }
        head = head -> leg;
    }

    head = start;
}

int main()
{
    return 0;
}