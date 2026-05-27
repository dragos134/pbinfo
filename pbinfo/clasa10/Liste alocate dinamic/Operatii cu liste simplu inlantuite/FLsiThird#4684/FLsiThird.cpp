#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/4684/flsithird

ifstream fin("flsithird.in");
ofstream fout("flsithird.out");

struct nod
{
    int info;
    nod *urm;
};

nod* generate()
{
    nod *p = new nod;
    p -> urm = NULL;
    int n;
    fin >> n;
    nod *start = p;
    for(int i = 0; i < n; i++)
    {
        nod *aux = new nod;
        fin >> aux -> info;
        aux -> urm = NULL;
        p -> urm = aux;
        p = p -> urm;
    }
    return start -> urm;
}

void EraseThird(nod *head)
{
    int cnt = 1;
    while(head -> urm != NULL)
    {
        if(cnt == 2)
        {
            cnt = 0;
            nod *q = head -> urm;
            fout << q -> info << ' ';
            head -> urm = q -> urm;
            delete q;
        }
        else
        {
            cnt++;
            head = head -> urm;
        }
    }
}

int main()
{
    nod *test = generate();
    EraseThird(test);
    return 0;
}