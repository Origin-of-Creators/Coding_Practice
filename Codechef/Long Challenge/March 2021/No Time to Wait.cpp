#include <iostream>
using namespace std;

int main()
{
	int n, h, x;
	bool flag = false;
	cin >> n >> h >> x;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num + x == h)
		{
			flag = true;
		}
		else
		{
			continue;
		}
	}
	if (flag)
		cout << "Yes\n";
	else
		cout << "No\n";
}
