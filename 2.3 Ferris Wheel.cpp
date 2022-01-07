/*
    Date:              30/10/2021
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

    ll n, x, nogon = 0;
    cin >> n >> x;
    ll p[n + 1];
    ll i = 0, j = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);

    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            nogon++;
            i++;
            j--;
        }
        else
        {
            nogon++;
            j--;
        }
    }
    cout << nogon;
}