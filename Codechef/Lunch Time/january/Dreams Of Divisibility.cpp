#include <iostream>
typedef long long int llu;
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		llu n, k, num, temp, count = 0;
		cin >> n >> k;
		for (llu i = 0; i < n; i++)
		{
			cin >> num;
			temp = num;
			if (num % k != 0)
			{
				while (num % k != 0 && temp < num * 1000)
				{
					num += num;
				}
				if (num % k == 0)
					count++;
			}
			else
				count++;
		}
		if (count == n)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
