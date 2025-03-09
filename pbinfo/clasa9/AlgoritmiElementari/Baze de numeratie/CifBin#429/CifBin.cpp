#include <iostream>
using namespace std;
int main()
{
    int n,z=0,u=0;
    cin>>n;
    while(n)
    {
        if(n%2==0)
            z++;
        else
            u++;
        n/=2;
    }
    cout<<z<<" "<<u;
    return 0;
}