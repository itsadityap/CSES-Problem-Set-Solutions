/*
    Date:              05/01/2022
    Author:            Aditya Pandey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll               long long int
#define br               "\n"
#define MOD              1000000007
#define min3(a, b, c)       min(c, min(a, b))
#define min4(a, b, c, d)    min(d, min(c, min(a, b)))
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll fastPower(ll a, ll n)
{
    if (n == 0)
    {
        return 1;
    }

    ll subProb = fastPower(a, n / 2);
    ll subProbSq = (subProb * subProb) % MOD;
    if (n & 1)
    {
        return (a * subProbSq) % MOD;
    }
    return (subProbSq) % MOD;
}

signed main()
{
    fio;
    ll n, b, a;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << fastPower(a, b) % MOD << br;
    }
}