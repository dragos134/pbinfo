#include <iostream>

using namespace std;
// https://www.pbinfo.ro/probleme/4166/flsidublu

struct Nod
{
    int info;
    Nod *leg;
};

int FLsiDublu(Nod *head)
{
    Nod* p = head;
    int cnt = 0, ult = 0;
    while(p != NULL)
    {
        cnt++;
        p = p -> leg;
    }

    if(cnt % 2 == 1)
    {
        return -1;
    }

    Nod* half = head;
    p = head;
    for(int i = 0; i < cnt / 2; i++)
    {
        ult = half -> info;
        half = half -> leg;
    }

    for(int i = 0; i < cnt / 2; i++)
    {
        if(half -> info != p -> info)
        {
            return -1;
        }
        half = half -> leg;
        p = p -> leg;
    }

    return ult;
}

int main()
{
    return 0;
}