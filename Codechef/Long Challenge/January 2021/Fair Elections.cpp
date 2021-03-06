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
		int n, m;
		int sum_john = 0, sum_jack = 0;
		cin >> n >> m;
		vector<int> ar_john;
		vector<int> ar_jack;
		for (int i = 0; i < n; i++)
		{
			int in;
			cin >> in;
			ar_john.push_back(in);
			sum_john += ar_john[i];
		}
		for (int i = 0; i < m; i++)
		{
			int in;
			cin >> in;
			ar_jack.push_back(in);
			sum_jack += ar_jack[i];
		}
		sort(ar_john.begin(), ar_john.end());
		sort(ar_jack.begin(), ar_jack.end(),greater<>());
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (sum_john > sum_jack)
				break;
			count++;
			sum_john = sum_john - ar_john[i];
			sum_john = sum_john + ar_jack[i];
			sum_jack = sum_jack - ar_jack[i];
			sum_jack = sum_jack + ar_john[i];
		}
		if (sum_john > sum_jack)
			cout << count << endl;
		else
			cout << "-1" << endl;
		ar_john.clear();
		ar_jack.clear();
	}
}
