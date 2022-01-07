/*
    Date:              01/11/2021
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))

signed main()
{
	ll num;
	cin >> num;
	vector<pair<ll, ll>> p(num);
	for (ll i = 0; i < num; i++)
	{
		int start, end;
		cin >> start >> end;
		p.push_back({start, 1});
		p.push_back({end, -1});
	}

	sort(p.begin(), p.end());

	int actaulcust = 0;
	int maxcust = 0;
	for (int i = 0; i < p.size(); i++)
	{
		actaulcust += p[i].second;
		maxcust = max(maxcust, actaulcust);
	}
	cout << maxcust << br;
}