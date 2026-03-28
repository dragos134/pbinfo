#include <fstream>

using namespace std;

ifstream fin("sumesubsecv.in");
ofstream fout("sumesubsecv.out");

int main()
{
    long long n, a[100000];
    long long s = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    int start = 0, end = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i < n && abs(a[i] - a[i - 1]) == 1)
        {
            end++;
        }
        else
        {
            long long cnt = end - start + 1;

            for(int j = start; j <= end; j++)
            {
                long long cuant = j - start;
                s = (s + (((cuant + 1) * (cnt - cuant) % 1000000007) * a[j]) % 1000000007) % 1000000007;
            }

            start = i;
            end = i;
        }
    }

    fout << s % 1000000007;

    return 0;
}