#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("patrate3.in");
ofstream fout("patrate3.out");

int main()
{
    int c, n;
    fin >> c >> n;
    if(c == 1)
    {
        fout << 8 * n;
    }
    else
    {
        double right = (sqrt(n) + 1) / 2;
        fout << (int)right;
    }
    return 0;
}