#include <iostream>

using namespace std;

struct nod{
    int info;
    nod * urm;
};

void afisare(nod * p)
{
    while(p != NULL)
    {
        cout << p -> info << ' ';
        p = p -> urm;
    }
}

int main()
{

    return 0;
}