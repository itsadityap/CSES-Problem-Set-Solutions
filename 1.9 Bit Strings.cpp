/*
    Date:              04/01/2022
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

ll power(ll b, ll n, ll mod)
{
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * b) % mod;
    }
    return ans;
}

signed main()
{
    ll n;
    cin >> n;
    cout << power(2, n, MOD);
}