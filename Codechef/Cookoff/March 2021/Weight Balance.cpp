#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w1,w2,x1,x2,M;
        ll inc,min ,max;
        cin>>w1>>w2>>x1>>x2>>M;
        inc = w2-w1;
        min = x1 * M;
        max = x2 * M;
        if(inc>=min && inc <= max)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
}
