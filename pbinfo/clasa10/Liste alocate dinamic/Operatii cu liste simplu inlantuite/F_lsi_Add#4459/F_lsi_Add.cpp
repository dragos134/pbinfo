#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/4459/f-lsi-add

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
    cin >> n;
    Nod *start = p;
    for(int i = 0; i < n; i++)
    {
        Nod *aux = new Nod;
        cin >> aux -> info;
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
        cout << p -> info << ' ';
        p = p -> leg;
    }
}

void LsiAdd(Nod *&head, int val, int x, int y)
{
    if(head == NULL)
    {
        return;
    }
    Nod* start = head;
    if(head -> info == val)
    {
        Nod *nx = new Nod;
        nx -> info = x;
        Nod *ny = new Nod;
        ny -> info = y;

        nx -> leg = head;
        ny -> leg = head -> leg;
        head -> leg = ny;
        head = nx;
        return;
    }

    while(head -> leg != NULL && head -> leg -> info != val)
    {
        head = head -> leg;
    }

    if(head -> leg == NULL)
    {
        head = start;
        return;
    }

    Nod *nx = new Nod;
    nx -> info = x;
    Nod *ny = new Nod;
    ny -> info = y;

    ny -> leg = head -> leg -> leg;
    head -> leg -> leg = ny;
    nx -> leg = head -> leg;
    head -> leg = nx;

    head = start;
}

int main()
{
    Nod *test = generate();
    afisare(test);
    cout << endl;
    LsiAdd(test, 4, 88, 99);
    afisare(test);
    return 0;
}