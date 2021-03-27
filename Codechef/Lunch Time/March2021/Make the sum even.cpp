#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
 
typedef long long ll;

 
ll maxm(ll a , ll b)
{
    if(a<b)
        return b;
    else
        return a;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll sum = 0, count = 0,ec=0,oc=0,c2=0;
        ll *a = new ll[n];
        ll flag = false;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i]==2)
                c2++;
            if(a[i]%2==0)
                ec++;
            else
                oc++;
        }
        if(sum % 2 == 0)
        {
            cout<<count<<endl;
        }
        else
        {
            if(oc%2!=0 && c2<1)
                cout << "-1\n";
            else
                cout << "1\n";
        }
        
    }
    return 0;
}
