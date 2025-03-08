#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("3lan.in");
ofstream fout("3lan.out");

int main()
{
    short n;
    fin >> n;
    fout << 7 * n * (n - 1) / 2;
    return 0;
}