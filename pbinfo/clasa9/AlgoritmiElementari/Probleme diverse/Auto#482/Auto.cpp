#include <iostream>
using namespace std;
int main()
{
    int n,t,i,D=0,T=0,v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t>>v;
        D=D+t*v;
        T=T+t;
    }
    cout<<D<<" "<<(float)D/T;
    return 0;

}
