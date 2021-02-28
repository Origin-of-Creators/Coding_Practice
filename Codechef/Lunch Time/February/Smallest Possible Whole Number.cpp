#include <iostream>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if(k!=0)
        cout << n % k <<"\n";
        else
        {
            cout << n << "\n";
        }
    }
}
