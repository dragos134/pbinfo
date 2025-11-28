#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mcub.in");
ofstream fout("mcub.out");

int main()
{
    int n, a[100000], cnt = 0, cur_drop = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] - cur_drop > 0)
        {
            cur_drop = a[i];
            
        }
    }


    return 0;
}