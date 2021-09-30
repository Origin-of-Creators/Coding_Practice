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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<p32> vp32;
typedef vector<p64> vp64;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef unordered_map<int,int> um32;
typedef unordered_map<ll,ll> um64;
ll MOD = 998244353;
ll modulo = 1000000007;
double eps = 1e-12;
//define:
#define forn(i,e) for(ll i = 0; i < e; i++)
#define foren(i,e) for(ll i = 0; i <= e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define forsen(i,s,e) for(ll i = s; i <= e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define sorta(k) sort(k.begin(),k.end())
#define sortd(k) sort(k.begin(),k.end(),greater<int>())
#define sortpd(k) sort(k.rbegin () , k.rend ())
#define rev(k) reverse(k.begin(),k.end())
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

//function:
bool cmp (p64 & a , p64 & b)
{
    return a.second < b.second;
}

//main:
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , x;
        cin >> n >> x;
        um64 m;
        forn (i , n)
        {
            ll temp;
            cin >> temp;
            m[temp]++;
        }
        bool flag = false;
        ll maxFrequency = 0 , Operations = n + 1 , defaulMax = 0;
        for (auto it : m)
        {
            ll temp = it.first ^ x;
            auto it2 = m.find (temp);
            if (it.second > defaulMax)
                defaulMax = it.second;
            if(it2!=m.end() && x!=0)
            {
                ll storeFrequency = it.second + (*it2).second;
                if (storeFrequency == maxFrequency && it.second< Operations)
                {
                    Operations = it.second;
                }
                if (storeFrequency > maxFrequency)
                {
                    maxFrequency = storeFrequency;
                    Operations = (it.second);
                    flag = true;
                }
                
            }
        }
        if (!flag)
            cout << defaulMax << " 0";
        else
        {
            if (defaulMax >= maxFrequency)
                cout << defaulMax << " 0";
            else
                cout << maxFrequency <<" "<< Operations;
        }
            cout << endl;
    }
    return 0;
}
