#include <iostream>

using namespace std;

int main()
{
    long long n, m, sumSb = 0, sumAr = 0, x, mSb, mAr, mCost, costMin = 999999999999;
    bool ok = false;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        sumAr += x;
        cin >> x;
        sumSb += x;
    }
    cin >> m;
    while (m)
    {
        m--;
        cin >> mAr >> mSb >> mCost;
        if (mAr >= sumSb && mSb >= sumAr && mCost < costMin)
        {
            costMin = mCost;
            ok = true;
        }
    }

    if (ok)
        cout << costMin;
    else
        cout << -1;
    return 0;
}