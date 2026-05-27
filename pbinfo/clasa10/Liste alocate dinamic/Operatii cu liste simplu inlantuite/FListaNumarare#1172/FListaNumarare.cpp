#include <iostream>

using namespace std;

struct nod{
    int info;
    nod * urm;
};

int numarare(nod * p)
{
    int cnt = 0;
    while(p != NULL)
    {
        cnt++;
        p = p -> urm;
    }

    return cnt;
}

int main()
{

    return 0;
}