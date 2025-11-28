#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("anagrame1.in");
ofstream fout("anagrame1.out");

char cuvant[9];
size_t lng;

int main()
{
    fin.getline(cuvant, 9);
    lng = strlen(cuvant);
}