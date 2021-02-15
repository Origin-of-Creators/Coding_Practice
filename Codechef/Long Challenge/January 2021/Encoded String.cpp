#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	char ar[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p' };
	int t;
	cin >> t;
	int bit = 0;
	int decimal = 0;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			++bit;
			if (s[i] == '1')
			{
				decimal = decimal + pow(2, (4 - bit));
			}
			if (bit == 4)
			{
				cout << ar[decimal];
				bit = 0;
				decimal = 0;
			}
		}
		cout<<endl;
	}
	return 0;
}
