#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <cstring>
#include <bitset>
#include <random>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

//typedef:
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef unordered_map<int, int> um32;
typedef unordered_map<ll, ll> um64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
//define:
#define forn(i, e) for (ll i = 0; i < e; i++)
#define foren(i, e) for (ll i = 0; i <= e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define forsen(i, s, e) for (ll i = s; i <= e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define sorta(k) sort(k.begin(), k.end())
#define sortd(k) sort(k.begin(), k.end(), greater<int>())
#define rev(k) reverse(k.begin(), k.end())
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

//function:
//main:
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string str, str1;
        forn(i, n)
        {
            char c;
            cin >> c;
            str.pb(c);
        }
        str1 = str;
        reverse(all(str1));
        forn(i, m)
        {
            bool flag1 = false, flag2 = false;
            ll an1 = n + 1, an2;
            ll num;
            cin >> num;
            if(num == 1)
            {
                cout << "0 ";
                continue;
            }
            if (str[num - 1] != '0')
            {
                cout << "0 ";
                continue;
            }
            size_t s1 = str.find("2", num);
            if (s1 == string::npos)
                flag1 = true;
            else
            {
                an1 = s1 - num + 1;
            }
            size_t s2 = str1.find("1", n - num + 1);
            if (s2 == string::npos)
                flag2 = true;
            else
            {
                an2 = s2 - (n - num);
                if (an2 < an1)
                    an1 = an2;
            }
            if (flag1 && flag2)
                cout << "-1 ";
            else
                cout << an1 << " ";
        }
        cout << endl;
    }
    return 0;
}

