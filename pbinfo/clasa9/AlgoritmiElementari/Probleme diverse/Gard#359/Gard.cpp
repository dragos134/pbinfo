#include <iostream>
using namespace std;
int main()
{
    int n,a[10000],i,max=0,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(i=1;i<=n;i++)
        s=s+max-a[i];
    cout<<s;
    return 0;
}
