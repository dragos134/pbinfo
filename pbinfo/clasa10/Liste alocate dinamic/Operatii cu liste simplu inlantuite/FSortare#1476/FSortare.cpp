#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/1476/fsortare

struct nod{
    int info;
    nod *urm;
};

void sortareCrescator(nod *&prim)
{
    for(nod *i = prim; i -> urm != NULL; i = i -> urm)
    {
        for(nod *j = i -> urm; j != NULL; j = j -> urm)
        {
            if(i -> info > j -> info)
            {
                int aux = i -> info;
                i -> info = j -> info;
                j -> info = aux;
            }
        }
    }
}

int main()
{
    return 0;
}