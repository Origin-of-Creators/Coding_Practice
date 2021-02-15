#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<long long int> arr;
		for (int i = 0; i < n; i++)
		{
			long long int a;
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		auto itrb = arr.begin();
		auto itre = arr.end();
		long long int res = 0;
		res = abs(*itrb - *(itrb + 1)) + abs(*(itrb + 1) - *(itre - 1)) + abs(*(itre - 1) - *itrb);
		cout << res << endl;
	}
}

