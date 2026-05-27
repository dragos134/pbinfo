#include <iostream>

using namespace std;

struct nod{
    int info;
    nod * urm;
};

int numarare(nod * p)
{
    int cnt = 0;
    while(p -> urm != NULL)
    {
        if(p -> info == p -> urm -> info)
        {
            cnt++;
        }
        p = p -> urm;
    }
    return cnt;
}

int main()
{


}