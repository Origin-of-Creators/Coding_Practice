#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
//typedef: 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
ll modulo = 1000000007;
double eps = 1e-12;

//define:
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

//function:
 
//main:
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if (n % 4 == 0)
        {
            ll count = 0;
            vector<ll> arr1 , arr2;
            for (int i = 1; i <= n / 2; i++)
            {
                if (count % 2 == 0)
                {
                    arr1.push_back (i);
                    arr1.push_back (n - (i - 1));
                    count++;
                }
                else
                {
                    arr2.push_back (i);
                    arr2.push_back (n - (i - 1));
                    count++;
                }
            }
            cout << "YES\n";
            sort (arr1.begin () , arr1.end ());
            sort (arr2.begin () , arr2.end ());
            for (auto it : arr1)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : arr2)
            {
                cout << it << " ";
            }
        }
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
