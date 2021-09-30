#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <cmath>
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
    ll t;
	cin >> t;
	while (t--)
	{
		ll l, r;
		cin >> l >> r;
		if (l % 3 == 1)
			l += 2;
		if (l % 3 == 2)
			l++;
		if (r % 3 == 1)
			r--;
		if (r % 3 == 2)
			r -= 2;
        cout << (r - l) / 3 + 1 << endl;
	}
    return 0;
}
