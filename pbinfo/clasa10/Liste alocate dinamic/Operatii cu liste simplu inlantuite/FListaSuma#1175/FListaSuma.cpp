#include <iostream>

using namespace std;

struct nod{
    int info;
    nod * urm;
};

int suma(nod * p)
{
    int sum = 0;
    while(p -> urm -> urm != NULL)
    {
        if(p -> info % 2 == 0 && p -> urm -> info % 2 == 1 && p -> urm -> urm -> info % 2 == 0)
        {
            sum += p -> urm -> info;
        }
        p = p -> urm;
    }

    return sum;
}

int main()
{

    return 0;
}