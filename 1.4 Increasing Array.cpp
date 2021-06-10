/*
    Date:               30/04/2021
    Author:             Aditya Pandey
*/
#include <bits/stdc++.h>
using namespace std;
#define ll            long long
#define endl             "\n"
 
signed main()
{
    ll n;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll count = 0, dif;
 
    for (ll j = 0; j < n - 1; j++)
    {
        dif = 0;
        if (ar[j + 1] < ar[j])
        {
            dif = ar[j] - ar[j + 1];
            ar[j + 1] = ar[j] ;
            count = count + dif;
        }
    }
    cout <<  count << endl;
}