/*
    Date:               10/06/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define int              long long
#define endl             "\n"
#define MOD              1000000007
signed main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;

		if (x < y)
		{
			int ans = 0;
			if (y % 2 != 0)
			{
				ans = (y * y) - x + 1;
			}
			else
			{
				ans = ((y - 1) * (y - 1)) + x;
			}
			cout << ans << endl;
		}
		else
		{
			int ans;
			if (x % 2 != 0)
			{
				ans = ((x - 1) * (x - 1) + y);
			}
			else
			{
				ans = (x * x) - y + 1;

			}
			cout << ans << endl;
		}
	}
}