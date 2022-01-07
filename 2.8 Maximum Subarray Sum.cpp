/*
    Date:              05/01/2022
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll maxSubArray(vector<ll>& v)
{
    long long sum = 0, largest = INT_MIN;
    for (auto it : v)
    {
        sum += it;
        largest = max(sum, largest);
        if (sum < 0) sum = 0;
    }
    return largest;
}

signed main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
    }

    cout << maxSubArray(v);
}