#include <iostream>
#include <math.h>
#include <algorithm>
#include <bitset>
typedef long long int ll;

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        //ll d = ceil(log2(c));
        //ll d2 = pow(2, d);
        string str = bitset<64>(c).to_string();
        ll index = 0;
        for (ll i = 0; i < 64; i++)
        {
            if (str[i] == '1')
            {
                index = i;
                break;
            }
        }
        str = str.substr(index, 64);
        string str1, str2;
        str1.push_back('1');
        str2.push_back('0');
        for (ll i = 1; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                str1.push_back('0');
                str2.push_back('1');
            }
            else if(str[i] == '0')
            {
                str1.push_back('1');
                str2.push_back('1');
            }
        }
        ll A = bitset<64>(str1).to_ullong();
        ll B = bitset<64>(str2).to_ullong();
        cout << A * B<<endl;

    }
}
