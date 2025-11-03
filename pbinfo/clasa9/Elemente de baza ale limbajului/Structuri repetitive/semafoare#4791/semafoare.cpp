#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("semafoare.in");
ofstream fout("semafoare.out");

int main()
{
    int c, r1, g1, v1, r2, g2, v2, t1, t2;
    fin >> c >> r1 >> g1 >> v1 >> r2 >> g2 >> v2 >> t1 >> t2;
    int s1 = r1 + g1 + v1 + g1, s2 = r2 + g2 + v2 + g2;
    if(c == 1)
    {
        int nr_secv1 = t1 % s1, nr_secv2 = t2 % s2;
        int rem1 = 0, rem2 = 0;
        if(nr_secv1 < r1 + g1)
        { 
            rem1 = r1 + g1 - nr_secv1;
        }
        else
        {
            rem1 = r1 + g1 + s1 - nr_secv1;
        }
        if(nr_secv2 < r2 + g2)
        { 
            rem2 = r2 + g2 - nr_secv2;
        }
        else
        {
            rem2 = r2 + g2 + s2 - nr_secv2;
        }
        fout << (min(rem1, rem2));
    }
    if(c == 2)
    {
        int nr_secv1 = t1 % s1, nr_secv2 = t2 % s2, i = 0;
        while(true)
        {
            bool este_rosu1 = nr_secv1 < r1;
            bool este_rosu2 = nr_secv2 < r2;
            bool este_galben1 = nr_secv1 >= r1 && nr_secv1 < r1 + g1 || nr_secv1 >= r1 + g1 + v1 && nr_secv1 < r1 + g1 + v1 + g1;
            bool este_galben2 = nr_secv2 >= r2 && nr_secv2 < r2 + g2 || nr_secv2 >= r2 + g2 + v2 && nr_secv2 < r2 + g2 + v2 + g2;
            bool este_verde1 = nr_secv1 >= r1 + g1 && nr_secv1 < r1 + g1 + v1;
            bool este_verde2 = nr_secv2 >= r2 + g2 && nr_secv2 < r2 + g2 + v2;
            
            if(este_rosu1 && este_rosu2 || este_galben1 && este_galben2 || este_verde1 && este_verde2)
            {
                break;
            }

            i++;

            nr_secv1 = (t1 + i) % s1;
            nr_secv2 = (t2 + i) % s2;
        }
        fout << i;
    }
    return 0;
}