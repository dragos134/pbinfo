#include <iostream>

using namespace std;

int main()
{
    int n;
    bool cresc = true, descresc = true, egale = true;
    cin >> n;
    while(n > 9)
    {
        int uc = n % 10, pc = n / 10 % 10;
        if(uc > pc)
        {
            descresc = false;
            egale = false;
        }
        if(uc < pc)
        {
            egale = false;
            cresc = false;
        }
        if(uc == pc)
        {
            cresc = false;
            descresc = false;
        }
        n = n / 10;
    }
    if(egale)
    {
        cout << "egale";
    }
    else if(descresc)
    {
        cout << "strict descrescatoare";
    }
    else if(cresc)
    {
        cout << "strict crescatoare";
    }
    else
    {
        cout << "neordonate";
    }
    return 0;
}