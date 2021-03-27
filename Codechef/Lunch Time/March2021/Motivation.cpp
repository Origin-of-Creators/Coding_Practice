#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
typedef long long ll;
 

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        ll max = -1;
        for (ll i = 0; i < n; i++)
        {
            ll s, r;
            cin >> s >> r;
            if(s<=x)
            {
                if(r>max)
                    max = r;
            }

        }
        cout << max<<endl;
    }
    return 0;
}
