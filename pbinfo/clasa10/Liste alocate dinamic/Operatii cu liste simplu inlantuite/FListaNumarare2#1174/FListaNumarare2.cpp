#include <iostream>

using namespace std;

// https://www.pbinfo.ro/probleme/1174/flistanumarare2

struct nod{
    int info;
    nod * urm;
};

int euclid(int a, int b)
{
    while(a % b > 0)
    {
        int aux = a % b;
        a = b;
        b = aux;
    }

    return b;
}

int numarare(nod * p)
{
    int cnt = 0;
    for(nod* i = p; i -> urm != NULL; i = i -> urm)
    {
        for(nod* j = i -> urm; j != NULL; j = j -> urm)
        {
            if(euclid(i -> info, j -> info) == 1)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cout << euclid(36, 18);
    return 0;
}