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
	ll n, ways;
	cin >> n;
	for (ll i = 1; i <= n; i++)
	{
		ways = (i - 1) * (i + 4) * ((i * i) - (3 * i) + 4) / 2;
		cout << ways << br;
	}

}