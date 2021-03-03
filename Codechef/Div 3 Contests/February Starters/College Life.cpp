#include <iostream>
#include <vector>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
	while (t--)
	{
		ll S;
		cin >> S;
		vector<ll> Q;
		ll num,x,min=0;
		for (ll i = 0; i < S; i++)
		{
			cin >> num;
			Q.push_back(num);
		}

		//input episodes and length of each episode
		vector<vector<ll>> E;
		for (ll i = 0; i < S; i++)
		{
			vector<ll> vec;
			cin >> num;
			vec.push_back(num);
			for (ll j = 1; j <= num; j++)
			{
				cin >> x;
				vec.push_back(x);
			}
			E.push_back(vec);
			vec.clear();
		}

		for (ll i = 0; i < S; i++)
		{
			if (E[i][0] == 1)
			{
				min += E[i][1];
				continue;
			}
			else
			{
				min = min + E[i][1];
				for (ll j = 2; j < E[i].size(); j++)
				{
					min = min + E[i][j]-Q[i];
				}
			}
		}
		cout<<min<<"\n";


	}
}
