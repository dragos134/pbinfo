#include <fstream>
using namespace std;

ifstream fin("fibo0.in");
ofstream fout("fibo0.out");

int main()
{
    int x1, x2, cnt = 0;
    while((fin >> x1) && (fin >> x2))
    {
        cnt += !(x2 % x1);
    }
    fout << cnt;
    return 0;
}