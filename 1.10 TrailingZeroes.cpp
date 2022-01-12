/*
    Date:              11/01/2022
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

signed main()
{
    ll n;
    cin >> n;
    ll count = 0;

    for (int i = 5; n / i >= 1 ; i = i * 5)
    {
        count += n / i;
    }

    cout << count;
}