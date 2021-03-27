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
        ll u, v, a, s;
        cin >> u >> v >> a >> s;
        if(u <= v)
            cout << "Yes" << endl;
        else
        {
            ll vel = ceil(sqrt(pow(u, 2) - (2 * a * s)));
            if(vel<=v && vel>0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
