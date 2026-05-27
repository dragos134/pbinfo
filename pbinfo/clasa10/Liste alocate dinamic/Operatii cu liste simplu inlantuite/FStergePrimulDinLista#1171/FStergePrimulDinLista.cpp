#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1171/fstergeprimuldinlista

struct nod{
    int info;
    nod * urm;
};

void stergePrimul(nod * & p)
{
    p = p -> urm;
}

int main()
{
    return 0;
}