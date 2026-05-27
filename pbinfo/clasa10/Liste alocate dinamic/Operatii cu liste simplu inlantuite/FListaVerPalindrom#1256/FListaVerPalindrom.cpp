#include <fstream>

using namespace std;
// https://www.pbinfo.ro/probleme/1256/flistaverpalindrom

ifstream fin("flistaverpalindrom.in");
ofstream fout("flistaverpalindrom.out");

struct node {
  char key;
  node *next;
};

node* generate()
{
    node *p = new node;
    p -> next = NULL;
    int n;
    fin >> n;
    node *start = p;
    for(int i = 0; i < n; i++)
    {
        node *aux = new node;
        fin >> aux -> key;
        aux -> next = NULL;
        p -> next = aux;
        p = p -> next;
    }
    return start -> next;
}

void afisare(node *p)
{
    while(p != NULL)
    {
        fout << p -> key << ' ';
        p = p -> next;
    }
}

bool palindrom(node *l)
{
    node *ogl = NULL, *cpy = l;
    while(l != NULL)
    {
        node *aux = new node;
        aux -> key = l -> key;
        aux -> next = ogl;
        ogl = aux;
        l = l -> next;
    }
    l = cpy;
    while(cpy != NULL)
    {
        if(cpy -> key != ogl -> key)
        {
            return false;
        }
        cpy = cpy -> next;
        ogl = ogl -> next;
    }
    return true;
}

int main()
{
    node *test = generate();
    fout << palindrom(test);
    return 0;
}