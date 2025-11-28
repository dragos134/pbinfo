#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("suma35.in");
ofstream fout("suma35.out");

int main()
{
    int n, cnt3 = 0, cnt5 = 0;
    fin >> n;
    while((n - cnt5 * 5) % 3 != 0)
    {
        cnt5++;
    }
    cnt3 = (n - cnt5 * 5) / 3;
    while(cnt3 >= 0)
    {
        for(int i = 0; i < cnt3; i++)
        {
            fout << "3 ";
        }
        for(int i = 0; i < cnt5; i++)
        {
            fout << "5 ";
        }
        fout << '\n';
        cnt3 -= 5;
        cnt5 += 3;
    }
    return 0;
}