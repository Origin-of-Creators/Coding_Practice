#include<iostream>
#include<vector>
using namespace std;
typedef long long int llu;
int main()
{
	llu t;
	cin >> t;
	while (t--)
	{
		vector<llu> ar;
		for (llu i = 0; i < 10; i++)
		{
			llu x;
			cin >> x;
			ar.push_back(x);
		}
		llu i = 9, k;
		cin >> k;

		while (ar[i] <= k || ar[i] == 0)
		{
			k -= ar[i];
			i--;
		}
		cout << i + 1 << "\n";
	}
	return 0;
}
