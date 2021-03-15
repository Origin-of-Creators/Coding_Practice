#include <iostream>

typedef long long int ll;

using namespace std;

int main()
{
	ll t;;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int grp = 0;
		for (ll i = 0; i < s.size(); i++)
		{
			if (s[i] =='1')
			{
				grp++;
				ll j = i + 1;
				while (true)
				{
					if (s[j] == '0' || j>=s.size())
					{
						i = j ;
						break;
					}
					j++;
				}
			}
		}
		cout << grp << endl;

	}
}
