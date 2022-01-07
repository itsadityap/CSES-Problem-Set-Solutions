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

bool cmp(pair<ll, ll>&a, pair<ll, ll>&b)
{
	return (a.second < b.second);
}

signed main()
{
	ll num;
	cin >> num;
	vector<pair<ll, ll>> p(num);
	for (ll i = 0; i < num; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	sort(p.begin(), p.end(), cmp);

	int i = 0;
	int Endtimeoflastmovie = -1;
	int movies = 0;
	while (i < num)
	{
		if (p[i].first >= Endtimeoflastmovie)
		{
			movies++;
			Endtimeoflastmovie = p[i].second;
			i++;
		}
		else
			i++;
	}
	cout << movies;
}