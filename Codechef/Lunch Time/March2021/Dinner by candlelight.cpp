#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
 
typedef long long ll;


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        ll A, Y, X;
        cin >> A >> Y >> X;
        ll lit = 1;
        lit += (A)*X;

        ll time = A - Y > 0 ? A - Y : 0;
        lit -= time * X;
        if (A >= Y)
            lit -= 1;
        cout << lit << endl;
    }
    return 0;
}
